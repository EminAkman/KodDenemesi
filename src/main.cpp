#include <Arduino.h>
#include <tokens.h> 

void setup() {
  // put your setup code here, to run once:
  a = 590;
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(a);
  delay(1000);
  
}
