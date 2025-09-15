# Ejercicio 4 - Potenciómetro y LED (Arduino)

Fuente: fileciteturn0file0

Sketch:
```ino
const int potPin = A0;
const int ledPin = 9;
void setup(){ pinMode(ledPin, OUTPUT); Serial.begin(9600); }
void loop(){
  int val = analogRead(potPin);
  int pwm = map(val,0,1023,0,255);
  analogWrite(ledPin, pwm);
  delay(100);
}
```
