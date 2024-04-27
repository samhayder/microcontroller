int yellowLed = 2;
int greenLed = 8;
int redLed = 10;
int value;

void setup(){
  Serial.begin(9600);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
}

void loop(){
  value = analogRead(A0);
  Serial.println(value);

  if (value < 520) {
    digitalWrite(redLed, HIGH);
  }
  else {
    digitalWrite(redLed, LOW);
  }

  if (value > 521 && value < 720) {
    digitalWrite(yellowLed, HIGH);
  }
  else {
    digitalWrite(yellowLed, LOW);
  }

  if (value > 721) {
    digitalWrite(greenLed, HIGH);
  }
  else {
    digitalWrite(greenLed, LOW);
  }

}