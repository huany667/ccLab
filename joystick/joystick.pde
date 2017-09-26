import processing.serial.*;

import cc.arduino.*;

Arduino arduino;


void setup() {
  size(800, 800);

  println(Arduino.list());
  
  arduino = new Arduino(this, Arduino.list()[3], 57600);
  
  arduino.pinMode(7, Arduino.INPUT);
  arduino.digitalWrite(7, Arduino.HIGH);
}

void draw() {
  fill(0,50);
  float x= map(arduino.analogRead(0), 0, 1023, 100, 700);
  float y= map(arduino.analogRead(1), 0, 1023, 100, 700);
  int r;
  println(arduino.digitalRead(7));
  if(arduino.digitalRead(7) == Arduino.HIGH){
    r= 50;
  }else{
    r= 30;
  }
  println(arduino.analogRead(7));
  fill(255);
  ellipse(x, y, r, r);
    
}