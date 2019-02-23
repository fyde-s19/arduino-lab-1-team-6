void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void timedBlink(int interval){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000*interval);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 1; i <= 3; i++)
    timedBlink(i);

}
