
 
void setup() {                
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  
}
 
void loop() {
  for (int i=5; i<=7; i=i+1){    // chasing right
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(1000);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);
     delay(1000); 
  }
  
  for (int i=7; i>=5; i=i-1){    // chasing right
    digitalWrite(i, HIGH);         // switching the LED at index i on
    delay(1000);                          // stopping the program for 100 milliseconds
    digitalWrite(i, LOW);
     delay(1000); 
  }
 
}
