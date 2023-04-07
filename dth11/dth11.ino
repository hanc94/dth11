#include <Adafruit_Sensor.h>
#include <DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);
void setup(){
  Serial.begin(9600);
  dht.begin();
}
void loop(){
  int err;
  float temp=dht.readTemperature();
  if(isnan(temp)){
    Serial.println("Failed to read from DHT");
  }else{
  Serial.print("temperatura: ");
  Serial.println(temp);
  }
  delay(1000);
}
