void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // keeping frequency at 100 Hz
  for(int i=0; i<100; i=i+1){
    dimmer(100, i);
  }
  for(int i=100; i>0; i=i-1){
    dimmer(100, i);
  }

  // changing frequency
  for(int i=10000; i>1; i-=1){
    dimmer(i, 50);
  }  
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000);
}

void dimmer(int freq, int duty){
  int period, onTime, offTime;
  period = 1000 / freq;
  onTime = period * duty / 100;
  offTime = period - onTime;
  digitalWrite(LED_BUILTIN, HIGH);
  delay(onTime);
  digitalWrite(LED_BUILTIN, LOW);
  delay(offTime);
}
