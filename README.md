# Arduino Keyboard Piano
### Simple IoT piano project, using Arduino Uno

***Overview :***  
Arduino takes input from serial monitor, and plays the tone corresponding to the input letter. If the input is a string (sequence), then each tone from the sequence is played for 0.5s before the next tone takes up.  
**Tones** - a, s, d, f, g, h, j, q, w, r, t, y, u  

***Required Components :***
- Arduino Uno
- 1k ohm resistor
- Piezo Buzzer (or Speaker)
- Jumper Wires

***Connections :***  
![Keyboard Piano](https://user-images.githubusercontent.com/77038120/151202644-7bfa36c8-6371-4bf2-8d8b-ae0156f51b8a.jpg)

[Tinkercad Simulation](https://www.tinkercad.com/things/kpLqjIFeYSE)

***Versions***  
- v1.0.0 - Only one character input, need to press enter key after every input.  
- v1.1.0 - Multiple character input, can press the input once the tone order is set. Still need to press enter after every combination.  

***Motivation behind the project :***  
The basic motivation beind this project is to help a few of my CS friends with their IoT project. Them being CS students, they couldn't understand much about sensors and stuff. Hence, they approached me for help (I'm an ECE Undergrad. Refer [My GitHub profile](https://github.com/Bharadwaj-R) for more info about me) 

