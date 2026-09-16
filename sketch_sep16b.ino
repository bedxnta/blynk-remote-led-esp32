#define BLYNK_TEMPLATE_ID "TMPL3xeCA6aZJ"
#define BLYNK_TEMPLATE_NAME "HomeAutoIOT"
#define BLYNK_AUTH_TOKEN "GM4PAf9IBKjH2ArS4IQ6RI65PdVbBluA"
#include<WiFi.h>
#include<BlynkSimpleEsp32.h>

char ssid[]="DULA";
char pass[]="1234567890";
#define ledpin 2


void setup() {
  Serial.begin(115200);
  pinMode(ledpin,OUTPUT);
  digitalWrite(ledpin,LOW);
  Blynk.begin(BLYNK_AUTH_TOKEN,ssid,pass);
}

BLYNK_WRITE(V0) {
  int pinValue=param.asInt();
  digitalWrite(ledpin,pinValue);
}

void loop() {
  Blynk.run();
}
