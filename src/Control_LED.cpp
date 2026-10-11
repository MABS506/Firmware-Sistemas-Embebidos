// scr/Control_LED.cpp
# include <Arduino.h>

void parpadearLED(int pin, int retrasoMS) {
  digitalWrite(pin, HIGH);
  delay(retrasoMs);
  digitalWrite(pin, LOW);
  delay(retrasoMs);
}
