#include <CapacitiveSensor.h>
#include "pitches.h"
CapacitiveSensor cs_4_2 = CapacitiveSensor(4,2); 

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

void setup(){
  Serial.begin(9600);
  cs_4_2.set_CS_AutocaL_Millis(0xFFFFFFFF); 
}

void loop(){
long start = millis();
long total1 = cs_4_2.capacitiveSensor(30);
Serial.print(millis() - start); 
// check on performance in milliseconds
Serial.print("\t");
 // tab character for debug window spacing
Serial.println(total1); 
// print sensor output 1
delay(10); 
// arbitrary delay to limit data to serial port
if(total1>= 800){
      for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(8);
  }  
  }
}

