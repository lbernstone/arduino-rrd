#include <rrd.h>
#include <FFat.h>
#include <Ticker.h>
#include <WiFi.h>
#include <WebServer.h>

char filename[] = "/test.rrd";
char full_filename[] = "/ffat/test.rrd"; // Must use full mounted path
char* rrd_test[8] =  {"rrd_create", //Argv[0] will be ignored
                      full_filename,
                      "-s300",
                      "DS:a:GAUGE:600:U:U",
                      "DS:b:GAUGE:600:U:U",
                      "RRA:AVERAGE:0.5:1:300",
                      "RRA:MIN:0.5:12:300",
                      "RRA:MAX:0.5:12:300" };
char ntpSrv[] = "pool.ntp.org";

Ticker tkFillDSa, tkFillDSb;
WebServer server(80);

void fillDSa() {
  log_i("Adding data");
  char* rrd_updater[1] =  {"N:12"};
  if (!rrd_update_r(full_filename,"",1, (const char**)&rrd_updater)) {
    log_e("Unable to add data to %s", full_filename);
  }
}

void fillDSb() {
  
}

void handleRoot() {
  char outfile[256];
  char outfilef[256];
  snprintf(outfile,256,"/%ld.xml", time(NULL));
  snprintf(outfilef,256,"/ffat%s", outfile);
  log_i("outfile: %s", outfilef);
  rrd_dump_r(full_filename, outfilef);
  File rrdfile = FFat.open(outfile);
  String content;
  while (rrdfile.available()) {
    char buf1[4096];
    size_t len = rrdfile.readBytes(buf1, 4096);
    if (len < 4096) buf1[len+1] = 0;
    content += buf1;
    delay(1);
  }
  unlink(outfilef);
  server.send(200, "text/xml", content);
}

void setup() {
  Serial.begin(115200);
  FFat.begin(true);
 
  if (!FFat.exists(filename)) {
    log_i("creating file");
    if (rrd_create(8, (char**)rrd_test) == -1) {
      log_e("Unable to create rrd: %s", filename);
      return;
    }
  }
  WiFi.begin();
  if (WiFi.waitForConnectResult() != WL_CONNECTED) {
    log_e("Unable to connect to WiFi");
    return;
  }
  configTime(0,0,ntpSrv); //UTC time
  struct tm now;
  if (!getLocalTime(&now, 120000)) { //attempt for 120 seconds
    Serial.println("Unable to sync with ntp server");
    return;
  }
  tkFillDSa.attach(60, fillDSa);
  tkFillDSb.attach(120, fillDSb);
  server.on("/", handleRoot);
  server.serveStatic(filename, FFat, filename, "no-cache");
  server.begin();
}

void loop() {
  server.handleClient();
  delay(250);
}
