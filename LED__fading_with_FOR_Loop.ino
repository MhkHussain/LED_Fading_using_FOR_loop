// Fade an LED using a PWM pin and for loop
int PWMpin = 11; // LED in series with 220 ohm resistor on pin 11
void setup() {
pinMode(PWMpin, OUTPUT);
}
void loop() {
int x = 1;
 for (int i = 0; i > -1; i = i + x) {
 analogWrite(PWMpin, i);
 if (i == 255) {
 x = -1; // switch direction at peak
 }
 delay(10);
 }
}
