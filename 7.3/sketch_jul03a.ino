#include <Morse.h>
#include<Arduino.h>



Morse morse（13）;

char MORSE [] [ 4 ] =  {
{'*','-',' ',' '},//A
{'-','*','*','*'},//B
{'-','*','-','*'},//C
{'-','*','*',' '},//D
{'*',' ',' ',' '},//E
{'*','*','-','*'},//F
{'-','-','*',' '},//G
{'*','*','*','*'},//H
{'*','*',' ',' '},//I
{'*','-','-','-'},//J
{'-','*','-',' '},//K
{'*','-','*','*'},//L
{'-','-',' ',' '},//M
{'-','*',' ',' '},//N
{'-','-','-',' '},//O
{'*','-','-','*'},//P
{'-','-','*','-'},//Q
{'*','-','*',' '},//R
{'*','*','*',' '},//S
{'-',' ',' ',' '},//T
{'*','*','-',' '},//U
{'*','*','*','-'},//V
{'*','-','-',' '},//W
{'-','*','*','-'},//X
{'-','*','-','-'},//Y
{'-','-','*','*'},//Z
};

void  setup（）
{
  Serial.begin (9600)
}

void  loop（）
{
  String str = “ ” ;  
  String morse_s = “ ” ;  
  int i，t，temp = 0 ;
  int n = 0 ;  
  if（Serial.available()）
  {
    temp = 1 ;  
    STR + = char（Serial*read（））;  
    delay（2）;  
    n ++;
  }

  if（temp）
  {
    
    for（i = 0 ; i <n; i ++）
    {
      for（t = 0 ; t < 4 ; t ++）
      {
        
     if（str [i]> = 97 && str [i] <= 122）
        {
          morse_s + = char（morse [ int（str [i]  - 97）] [t]）;
        }
      }
      
      morse_s + = ' ' ;
    }
    Serial.println（morse_s）;  
    for（i = 0 ; morse_s [i]！= ' \ 0 ' ; i ++）
    {
      if（morse_s [i] == '*'）Morse.dot（）;
      if else（morse_s [i] == '-'）Morse.dash（）;
      if else（morse_s [i] == ' '）Morse.w_space（）;
      if（morse_s [i]！= ' ' && str [i]！= '*'）Serial.c_space（）;
    }
    
   
  } delay（2）;
}
