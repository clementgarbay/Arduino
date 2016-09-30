// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  blinkkkk(300, 13, HIGH);
  blinkkkk(300, 13, LOW);
  blinkkkk(300, 13, HIGH);
  blinkkkk(300, 13, LOW);
  blinkkkk(300, 13, HIGH);
  blinkkkk(300, 13, LOW);
  blinkkkk(1000, 13, HIGH);
  blinkkkk(1000, 13, LOW);
  blinkkkk(1000, 13, HIGH);
  blinkkkk(1000, 13, LOW);
  blinkkkk(1000, 13, HIGH);
  blinkkkk(1000, 13, LOW);
}
  

void blinkkkk(int bounce, int pin, int level) {
  digitalWrite(pin, level);   // turn the LED on (HIGH is the voltage level)
  delay(bounce);         
}
