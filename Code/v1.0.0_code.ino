#include<Pitches.h>
//Include Pitches.h library into your arduino libraries before compiling
//code directly taken from open projects in Arduino Websites

int C[] = {N_C5};
int CS[] = {N_CS5};
int D[] = {N_D5};
int DS[] = {N_DS5};
int E[] = {N_E5};
int F[] = {N_F5};
int FS[] = {N_FS5};
int G[] = {N_G5};
int GS[] = {N_GS5};
int A[] = {N_A5};
int AS[] = {N_AS5};
int B[] = {N_B5};
int CC[] = {N_C6};
int duration(1000);

void setup() {
  pinMode(6, OUTPUT); //Digital Pin 6 is where you connect your Buzzer
  Serial.begin(9600);
  Serial.println("Welcome to the Virtual Keyboard!");
  Serial.println("Notes: A-S-D-F-G-H-J");
  Serial.println("#: Q-W-E-R-T-Y-U");
}

void loop() {
  if (Serial.available()) 
  {
    char ch = Serial.read();
    if (ch == 'a') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
      tone(6, C[Note], duration);
    }
    }
    if (ch == 'q') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
      tone(6, CS[Note], duration);
    }
    }
    if (ch == 's') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, D[Note], duration);
    }
    }
    if (ch == 'w') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, DS[Note], duration);
    }
    }
    if (ch == 'd') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, E[Note], duration);
    }
    }
    if (ch == 'f') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, F[Note], duration);
    }
    }
    if (ch == 'r') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, FS[Note], duration);
    }
    }
    if (ch == 'g') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, G[Note], duration);
    }
    }
    if (ch == 't') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, GS[Note], duration);
    }
    }
    if (ch == 'h') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, A[Note], duration);
    }
    }
    if (ch == 'y') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, AS[Note], duration);
    }
    }
    if (ch == 'j') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, B[Note], duration);
    }
    }
    if (ch == 'u') 
    {
    for (int Note = 0; Note < 1; Note++) 
    {
       tone(6, CC[Note], duration);
    }
    }
  }
}
