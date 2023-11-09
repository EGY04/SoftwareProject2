#define PIN_POTENTIOMETER 3

void setup() {
  Serial.begin(57600);
  // put your setup code here, to run once:

}

void loop() {
  int a_value = analogRead(PIN_POTENTIOMETER);

  Serial.print("ADC Read: ");
  Serial.print(a_value);
  Serial.print(" = ");
  Serial.print((a_value / 1024.0) * 5.0);
  Serial.print(" Volt");
  delay(100);
  // put your main code here, to run repeatedly:

}
