int led;
int result;
int rgb = 10;
int i;

void setup(){
  // Led bar light output pin mode set 0 to 9
 for (led = 0; led <= 9; led++) {
   pinMode(led, OUTPUT);
 }
 
 // rgb light output pin mode
  pinMode(rgb, OUTPUT);
}

void loop(){
  // Led light 
  for (result = 0; result <= 9; result++) {
    digitalWrite(result, HIGH);
    delay(200);
    digitalWrite(result, LOW);
  }

  for (i = 0; i <= 255; i = i+5) {
    analogWrite(rgb, i);
    delay(60);
  }
  for (i = 255; i > 0; i = i-5) {
    analogWrite(rgb, i);
    delay(60);
  }
}