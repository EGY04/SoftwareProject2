#define PIN_LED 7
unsigned int count;

void setup() {
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  
  count = 5;
  digitalWrite(PIN_LED, 0);
  delay(1000); 
 
  while (count !=0){
    digitalWrite(PIN_LED, 0);
    delay(100);    
    digitalWrite(PIN_LED, 1);    
    delay(100);
    count = --count ; 
  }
  while(1) {} //infinite loop
}
