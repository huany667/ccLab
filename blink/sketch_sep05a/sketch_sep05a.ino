const int  buttonPin = 2;    
const int ledPin = 13;      


int buttonPushCounter = 0;   
int buttonState = 0;        
int lastButtonState = 0;   

void setup() {

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
    }
    if(buttonPushCounter> 2){
         buttonPushCounter= 0;
      }
  }

  lastButtonState = buttonState;


  if (buttonPushCounter == 0) {
    digitalWrite(ledPin, LOW);
  } else if(buttonPushCounter == 1){
    digitalWrite(ledPin, HIGH);
  }else if(buttonPushCounter == 2){
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);      
    }

}
