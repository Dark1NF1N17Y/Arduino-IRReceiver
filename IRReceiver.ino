//Define Part
#define sensor 8
#define led 4
//Setup Part
void setup() {
  //PineMode Part
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}
//Loop Part
void loop() {
if(digitalRead(sensor) != HIGH){
    digitalWrite(led, HIGH);
}else{
  digitalWrite(led, LOW);
}
}
