int pin = 13;
void setup()
{
pinMode(pin, OUTPUT);
Serial.begin(9600);
}
void loop()
{ 
 
if (Serial.available() > 0)
{
char income=Serial.read();
switch(income)
{
case'a':
case'A':dot();dash();delay(3000);delay(3000);delay(3000);break;
case'b':
case'B':dash();dot();dot();dot();delay(3000);delay(3000);break;
case'c':
case'C':dash();dot();dash();dot();delay(3000);break;
case'd':
case'D':dash();dot();dot();delay(3000);break;
case'e':
case'E':dot();delay(3000);break;
case'f':
case'F':dot();dot();dash();dot();delay(3000);break;
case'g':
case'G':dash();dash();dot();delay(3000);break;
case'h':
case'H':dot();dot();dot();dot();delay(3000);break;
case'i':
case'I':dot();dot();delay(3000);break;
case'j':
case'J':dot();dash();dash();dash();delay(3000);delay(3000);break;
case'k':
case'K':dash();dot();dash();delay(3000);break;
case'l':
case'L':dot();dash();dot();dot();delay(3000);break;
case'm':
case'M':dash();dash();delay(3000);delay(3000);delay(3000);delay(3000);break;
case'n':
case'N':dash();dot();delay(3000);delay(3000);delay(3000);break;
case'o':
case'O':dash();dash();dash();delay(3000);delay(3000);break;
case'p':
case'P':dot();dash();dash();dot();delay(3000);break;
case'q':
case'Q':dash();dash();dot();dash();delay(3000);break;
case'r':
case'R':dot();dash();dot();delay(3000);break;
case's':
case'S':dot();dot();dot();delay(3000);break;
case't':
case'T':dash();break;
case'u':
case'U':dot();dot();dash();delay(3000);break;
case'v':
case'V':dot();dot();dot();dash();delay(3000);break;
case'w':
case'W':dot();dash();dash();delay(3000);break;
case'x':
case'X':dash();dot();dot();dash();delay(3000);break;
case'y':
case'Y':dash();dot();dash();dash();delay(3000);break;
case'z':
case'Z':dash();dash();dot();dot();delay(3000);break;
defult:
break;
 }
delay(3000);
}}
  void dot()
  {

digitalWrite(pin, HIGH);
delay(250);
digitalWrite(pin, LOW);
delay(250);
  }
  void dash()
  {

digitalWrite(pin, HIGH);
delay(1000);
digitalWrite(pin, LOW);
 delay(250);
  }
