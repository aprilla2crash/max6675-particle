
#include "max6675-particle.h"

int thermoDO = 4;
int thermoCS = 5;
int thermoCLK = 6;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);
int vccPin = 3;
int gndPin = 2;
double tempC , tempF;
  
void setup() {
  Particle.variable("Celcius", tempC);
  Particle.variable("Fahrenheit", tempF);
 
  

  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp
  
  tempC = thermocouple.readCelsius();
  tempC = thermocouple.readFahrenheit();
 
   delay(1000);
}
