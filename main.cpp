#include <Arduino.h>
#define Led_Blue 2
const int sensorPin = A0;

void setup() {
  pinMode(Led_Blue, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  int humedad = analogRead(sensorPin);
  Serial.print(humedad);
  Serial.println();
  digitalWrite(Led_Blue, HIGH);
  delay(1000);
  digitalWrite(Led_Blue, LOW);
  delay(1000);
  if(humedad < 500)
    {
       Serial.println("humedad aceptable");
       //hacer las acciones necesarias
    }
    if(humedad > 900)
  {
     Serial.println("regar la planta");
     //hacer las acciones necesarias
  }
    delay(1000);

}
