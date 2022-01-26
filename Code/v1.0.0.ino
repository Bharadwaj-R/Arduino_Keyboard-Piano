/*************************************************
 * Public Constants
 *************************************************/ 
#define N_REST  0
#define N_B0  31
#define N_C1  33
#define N_CS1 35
#define N_D1  37
#define N_DS1 39
#define N_E1  41
#define N_F1  44
#define N_FS1 46
#define N_G1  49
#define N_GS1 52
#define N_A1  55
#define N_AS1 58
#define N_B1  62
#define N_C2  65
#define N_CS2 69
#define N_D2  73
#define N_DS2 78
#define N_E2  82
#define N_F2  87
#define N_FS2 93
#define N_G2  98
#define N_GS2 104
#define N_A2  110
#define N_AS2 117
#define N_B2  123
#define N_C3  131
#define N_CS3 139
#define N_D3  147
#define N_DS3 156
#define N_E3  165
#define N_F3  175
#define N_FS3 185
#define N_G3  196
#define N_GS3 208
#define N_A3  220
#define N_AS3 233
#define N_B3  247
#define N_C4  262
#define N_CS4 277
#define N_D4  294
#define N_DS4 311
#define N_E4  330
#define N_F4  349
#define N_FS4 370
#define N_G4  392
#define N_GS4 415
#define N_A4  440
#define N_AS4 466
#define N_B4  494
#define N_C5  523
#define N_CS5 554
#define N_D5  587
#define N_DS5 622
#define N_E5  659
#define N_F5  698
#define N_FS5 740
#define N_G5  784
#define N_GS5 831
#define N_A5  880
#define N_AS5 932
#define N_B5  988
#define N_C6  1047
#define N_CS6 1109
#define N_D6  1175
#define N_DS6 1245
#define N_E6  1319
#define N_F6  1397
#define N_FS6 1480
#define N_G6  1568
#define N_GS6 1661
#define N_A6  1760
#define N_AS6 1865
#define N_B6  1976
#define N_C7  2093
#define N_CS7 2217
#define N_D7  2349
#define N_DS7 2489
#define N_E7  2637
#define N_F7  2794
#define N_FS7 2960
#define N_G7  3136
#define N_GS7 3322
#define N_A7  3520
#define N_AS7 3729
#define N_B7  3951
#define N_C8  4186
#define N_CS8 4435
#define N_D8  4699
#define N_DS8 4978


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
