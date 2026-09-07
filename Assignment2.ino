// Code to use switch bouncing 

const int buttonPin = 2;   
const int ledPin = 13;     

void setup() {  
  // Configure the button pin as INPUT with internal pull-up resistor  
  pinMode(buttonPin, INPUT_PULLUP);    
  pinMode(ledPin, OUTPUT);  
  digitalWrite(ledPin, LOW); 
} 

void loop() {  
  int buttonState = digitalRead(buttonPin);  // With INPUT_PULLUP, LOW means the button is pressed  
  if (buttonState == LOW)  {    
    // Wait for 50 ms to allow switch bouncing to settle    
    delay(50);       
    buttonState = digitalRead(buttonPin);       
    if (buttonState == LOW) {  
      digitalWrite(ledPin, HIGH); 
    } 
  } else { 
    digitalWrite(ledPin, LOW); 
  } 
} 
