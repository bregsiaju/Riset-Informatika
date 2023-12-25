#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

#define BLYNK_PRINT Serial
#define DHTPIN D1
#define DHTTYPE DHT11
#define relayLamp D4
#define relayFan D2

char auth[] = "ouLyNBnB4XOfsqx1FACHKt83F4eDAXb8";
const char *ssid = "skzoo";
const char *pass = "akuakuaku";
WiFiClient client;

const char* host = "blynk.en-26.com";
unsigned int port = 9600;

DHT dht (DHTPIN, DHTTYPE);
BlynkTimer timer;
  
void sendSensor(){
  int h = dht.readHumidity();
  int t = dht.readTemperature(); 
  
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  else{
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.print("*C");
    Serial.print(" Humidity: ");
    Serial.print(h);
    Serial.println("%");
  }

  if (t <= 30){
    digitalWrite(relayFan, HIGH);
  }
  else {
    digitalWrite(relayFan, LOW);
  }
  
  Blynk.virtualWrite(V5, t);
  Blynk.virtualWrite(V6, h);
  Blynk.virtualWrite(V1, HIGH);
}

void setup()
{
  // Debug console
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass, host, port);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
  pinMode(relayFan, OUTPUT);
  pinMode(relayLamp, OUTPUT);
}

BLYNK_WRITE(V1) {
  digitalWrite(relayLamp, param.asInt());
}

void loop() {
  Blynk.run();
  timer.run();
}
