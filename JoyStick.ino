/*
  Joystick

  This sketch demonstrates the general use of a simple joystick model.
  In this sketch the joystick is used to control four LEDs arranged up, down, 
  left and right based on the direction of the LED.

  In general view the LEDs could be replaced with a motor or any other actuator

  Created 28 June 2024
  https://github.com/akanfahishmael


*/
int xPin = A0;
int yPin = A1;
// LED pin numbering
int gree_led = 2;
int red_led = 3;
int yel_led = 4;
int blue_led = 5;


void setup() {
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  int xAxis = analogRead(xPin);
  int yAxis = analogRead(yPin);

  // Observe joystick reading on Serial monitor 
  Serial.print("X-Axis :");
  Serial.println(xAxis);

  Serial.print("Y-Axis :");
  Serial.println(yAxis);
  Serial.println(" ");

  // Blink an LED according to joystick direction
  if(xAxis<520){
    ledON(blue_led);
  }
  if(xAxis>530){
    ledON(red_led);
  }
  if(yAxis<500){
    ledON(yel_led);
  }
  if(yAxis>510){
    ledON(gree_led);
  }


}
// A function that blinks an LED
void ledON(int pin){
  digitalWrite(pin, HIGH);
  delay(100); 
  digitalWrite(pin, LOW);
  delay(100);
}
