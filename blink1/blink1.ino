const int ledPin = LED_BUILTIN;
int ledState = LOW;
unsigned long previous=0;
const long interval=500;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
}

void loop() {
  unsigned long current=millis();
  if(current-previous>=interval)
  {
    previous=current;
    if(ledState==LOW)
    {
      ledState=HIGH;
    }
    else {
    ledState=LOW;
  }
  }
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,ledState);

}
