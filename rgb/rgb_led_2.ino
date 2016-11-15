int LEDblau=5;
int LEDrot=6;
int LEDgreen=7;
int taster=11;
int taster2=12;
int taster3=13;
int flag=0;
int flag2=0;
int flag3=0;
int flag4=0;
int i = 0;
int zeit=75;

void setup()
{
pinMode(LEDblau, OUTPUT);
pinMode(taster, INPUT);
pinMode(LEDrot, OUTPUT);
pinMode(taster2, INPUT);
pinMode(LEDgreen, OUTPUT);
pinMode(taster3, INPUT);
}
void loop()
{

if (digitalRead(taster) == HIGH && flag == 0)
  {
    flag = 1;
    digitalWrite(LEDblau, HIGH);
    delay(375);
		if (digitalRead(taster) == HIGH)
		{
    		digitalWrite(LEDrot, HIGH);
    		digitalWrite(LEDblau, HIGH);
    		delay(375);
		}
			if (digitalRead(taster) == HIGH)
			{
    		digitalWrite(LEDrot, HIGH);
    		digitalWrite(LEDblau, HIGH);
    		digitalWrite(LEDgreen, HIGH);
    		delay(375);
			}
				if (digitalRead(taster) == HIGH)
				{
    				digitalWrite(LEDgreen, LOW);
    				delay(zeit);
    				digitalWrite(LEDblau, LOW);
    				delay(zeit);
    				digitalWrite(LEDrot, LOW);
    				delay(zeit);
    				digitalWrite(LEDgreen, HIGH);
    				delay(zeit);
    				digitalWrite(LEDblau, HIGH);
    				delay(zeit);
    				digitalWrite(LEDrot, HIGH);
  				}

}

