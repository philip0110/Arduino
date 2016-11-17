
int LEDblau=6;
int LEDrot=7;
int LEDgreen=5;
int taster=11;
int zeit=150;
int mode=0;

void setup() {
pinMode(LEDblau, OUTPUT);
pinMode(LEDrot, OUTPUT);
pinMode(LEDgreen, OUTPUT);
pinMode(taster, INPUT);
}
void loop() {
if (mode >= 4)
  {
    mode = 0;
    digitalWrite(LEDblau, LOW);
    digitalWrite(LEDgreen, LOW);
    digitalWrite(LEDrot, LOW);
    delay(zeit);
  }
if (digitalRead(taster) == HIGH)
  {
    mode = mode +1;
    delay(zeit);
  }

if (mode == 1)
  {
    digitalWrite(LEDblau, HIGH);
    digitalWrite(LEDrot, LOW);
    delay(zeit);
   }
   
if (mode == 2)
  {
    digitalWrite(LEDblau, LOW);
    digitalWrite(LEDgreen, HIGH);
    delay(zeit);
   }
if (mode == 3)
  {
    digitalWrite(LEDgreen, LOW);
    digitalWrite(LEDrot, HIGH);
    delay(zeit);
   }
 }
