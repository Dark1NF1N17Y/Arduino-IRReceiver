//Define Part
#define sensor 4
#define led 8
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
