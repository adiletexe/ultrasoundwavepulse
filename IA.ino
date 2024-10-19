#include <DHT.h>

#define DHTPIN 11
#define DHTTYPE DHT11

const int trigPin = 9;
const int echoPin = 10;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // emit ultrasound wave pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2000);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // measure DV
  long DVtime = pulseIn(echoPin, HIGH);
  Serial.print("Time taken: ");
  Serial.print(DVtime);
  Serial.println(" microseconds");
  delay(1000);
}
