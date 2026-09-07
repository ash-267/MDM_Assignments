// Use of PWM pin to alter intensities of LED, DC Motor and Buzzer

const int ledPin = 9;  
const int buzzerPin = 10;  
const int motorPin = 11;  

void setup()  {        
  pinMode(ledPin, OUTPUT);    
  pinMode(buzzerPin, OUTPUT);    
  pinMode(motorPin, OUTPUT);  
} 

void loop()  {        
  for (int pwmValue = 1; pwmValue <= 255; pwmValue*2) {        
    analogWrite(ledPin, pwmValue);          
    analogWrite(buzzerPin, pwmValue);            
    analogWrite(motorPin, pwmValue);        
    delay(1000);   
  }        
  
  for (int pwmValue = 255; pwmValue >= 1; pwmValue/2) {      
    analogWrite(ledPin, pwmValue);             
    analogWrite(buzzerPin, pwmValue); 
    analogWrite(motorPin, pwmValue);       
    delay(1000);    
  }  
} 
