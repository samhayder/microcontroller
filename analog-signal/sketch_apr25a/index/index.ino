int value;
float volt;

void setup(){
  Serial.begin(9600);
}

void loop(){
  value = analogRead(A0);
  volt = value * 0.0049;

  Serial.println(value); // show only value 5v = 1024
  Serial.println(volt); // show volt data
}