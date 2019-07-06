# l-
# 开源硬件

## 7.2

* 为什么学习开源

* 了解开源硬件
* 开源硬件常用网站
![](www.arduino.cc)
![](linux.ubuntu.org.cn)
* 三个软件

arduino
![](img/Aduino.png)

fritizing
![](img/fritizing.png)

processing
![](img/processing.png)

##7.3Arduino与Morse
`#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*3);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*7);
}
`

## 7.4car和数极管

### car
![](img/car.png)
代码
void setup()
{
  pinMode(5, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(9, OUTPUT);
  Serial.begin(9600);
      
  
}
int income;
void loop()
{if(Serial.available()>0)
{income=Serial.read();
}
 switch(income){
   case:'f':
   forward()；
  break;
   case:'r':
   right();
   break;
   case:'b':
   backwaed();
   break;
   case:'s':
   stop()；
     break;
   case:'l':
   left();
   break;
   defult;
   break;
   

}

void loop()
{
  void forward()
  {
  digitalWrite(5,HIGH);
  digitalWrit(3,LOW;
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
  void backward()
   {
  digitalWrite(3,HIGH);
  digitalWrit(5,LOW;
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}void left(){
  digitalWrite(5,HIGH);
  digitalWrit(3,LOW;
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
}
  void right(){
  digitalWrite(3,HIGH);
  digitalWrit(5,LOW;
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}void stop(){
  digitalWrite(3,LOW);
  digitalWrit(5,LOW;
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
}

### 数管
![]（img/数管.jpg）

代码
void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    int income;
  if(Serial.available())

  {
    income=Serial.read()-'0';
    if(income==1)
       digitalWrite(5,HIGH);
    if((income>>1&1)==1)
       digitalWrite(6,HIGH);
    if((income>>2&1)==1)
       digitalWrite(7,HIGH);
     if((income>>3&1)==1)
       digitalWrite(8,HIGH);
     digitalWrite(9,HIGH);
       delay(1000);
       }
       }


## 7.5Morse的tinkecad实现 
![](img/morse.jpg)
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

