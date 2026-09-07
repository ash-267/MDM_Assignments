// Code for non-blocking method (using the millis() function)

int ledPin = 9;
unsigned long startTime = 0;
bool fiveSecTime = false;
int button = 4;




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT_PULLUP);
 
}


void loop() {
  if (!fiveSecTime && (millis() - startTime >= 5000)) {
    fiveSecTime = true;
    Serial.println("Led ON");
    digitalWrite(ledPin, HIGH);
    startTime = millis();
  } else if (fiveSecTime && (millis() - startTime >= 5000)) {
    fiveSecTime = false;
    Serial.println("Led OFF");
    digitalWrite(ledPin, LOW);
    startTime = millis();
  }




  if (digitalRead(4) == HIGH) {
    Serial.println("Button Pushed");
  } else {
    Serial.println("Button Not Pushed");
  }
}
