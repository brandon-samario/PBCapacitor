// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600); 
  pinMode(A0, INPUT); 
}

// the loop function runs over and over again forever
void loop() {
  int PUSHBUTTON = analogRead(A0); 
  Serial.println(PUSHBUTTON); 
}
