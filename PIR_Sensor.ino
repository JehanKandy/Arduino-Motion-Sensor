//...........JEHANKANDY..................
//.........Motion Sensor.................
//..........PIR Sensor...................

void setup() {
pinMode(2,INPUT);
pinMode(3,OUTPUT);

}

void loop() {
 int val = digitalRead(2);
  if(val==1){
    digitalWrite(3,HIGH);
  }
  else{
    digitalWrite(3,LOW);
  
   }
}

//............Thank you..............
//....Develop By : JEHAN KANDY.......
