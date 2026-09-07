// The Serial Monitor displays the measured time period in microseconds and the corresponding frequency in Hertz (Hz) of the square-wave signal

const int signalPin = 2; 
unsigned long highTime;  
unsigned long lowTime;  
unsigned long period;  
float frequency;  

void setup()  {    
  pinMode(signalPin, INPUT);   
  Serial.begin(9600);  
}  

void loop()  {    
  highTime = pulseIn(signalPin, HIGH);   
  lowTime = pulseIn(signalPin, LOW);    
  period = highTime + lowTime;      
  if (period > 0)  {      
    frequency = 1000000.0 / period;       // Display results on Serial Monitor      
    Serial.print("Period = ");      
    Serial.print(period);      
    Serial.println(" microseconds");      
    Serial.print("Frequency = ");      
    Serial.print(frequency);      
    Serial.println(" Hz");       
    Serial.println("--------------------");    
  }    
  delay(500);  
} 
