void setup() {
pinMode(13,OUTPUT);   //left motors   forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right   motors forward
pinMode(10,OUTPUT);   //right motors reverse
Serial.begin(9600);
}

char i;

void loop() {
if(Serial.available()){
  i = Serial.read();
  Serial.println(i);
}
 
if(i == 'F'){            //move   forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
}
 
else if(i == 'B'){      //move reverse (all   motors rotate in reverse direction)
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
   
else if(i == 'L'){      //turn right (left side motors rotate in forward direction,   right side motors doesn't rotate)
  digitalWrite(10,HIGH);
}
 
else if(i == 'R'){      //turn left (right side motors rotate in forward direction, left  side motors doesn't rotate)
  digitalWrite(13,HIGH);
}
 
else if(i == 'S'){
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}
delay(100);
}