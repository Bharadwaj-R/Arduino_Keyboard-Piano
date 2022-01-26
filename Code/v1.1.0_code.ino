#include<Pitches.h>

//include Pitches.h header file in arduino ide libraries before compiling
//Minor changes from v1.0.0

int C = N_C5;
int CS = N_CS5;
int D = N_D5;
int DS = N_DS5;
int E = N_E5;
int F = N_F5;
int FS = N_FS5;
int G = N_G5;
int GS = N_GS5;
int A = N_A5;
int AS = N_AS5;
int B = N_B5;
int CC = N_C6;

int duration(500);

void setup()
{
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void tune(char ch)
{
  
  if (ch == 'a') 
  {
    tone(6, C, duration);
  }
  if (ch == 'q') 
  {
    tone(6, CS, duration);
  }
  if (ch == 's') 
  {
    tone(6, D, duration);
  }
  if (ch == 'w') 
  {
    tone(6, DS, duration);
  }
  if (ch == 'd') 
  {
    tone(6, E, duration);
  }
  if (ch == 'f') 
  {
    tone(6, F, duration);
  }
  if (ch == 'r') 
  {
    tone(6, FS, duration);
  }
  if (ch == 'g') 
  {
    tone(6, G, duration);
  }
  if (ch == 't') 
  {
    tone(6, GS, duration);
  }
  if (ch == 'h') 
  {
    tone(6, A, duration);
  }
  if (ch == 'y') 
  {
    tone(6, AS, duration);
  }
  if (ch == 'j') 
  {
    tone(6, B, duration);
  }
  if (ch == 'u') 
  {
    tone(6, CC, duration);
  }
}

void loop()
{
  if(Serial.available() != 0)
  {
    String str=Serial.readString();
    int len=str.length() + 1;
    char ch[len];
    str.toCharArray(ch,len);
    for(int i=0; i<len;i++)
    {
      Serial.println(ch[i]);
      tune(ch[i]);
      delay(duration);
    }
  }
}
