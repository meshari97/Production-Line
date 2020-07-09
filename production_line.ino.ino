#include <Servo.h>  //servo motor library

//Follwoing block intalizing servo motor will used
Servo servo1;
Servo servo2;
Servo servo3;

//Follwoing block intalizing name for pins
int cont1=A0; 
int cont2=A1;
int cont3=A2;


void setup() {

//Follwoing block pins attatch to each servp motor  
servo1.attach(5);
servo2.attach(4);
servo3.attach(3);

//Follwoing block mode for pins 
pinMode(cont1, INPUT);
pinMode(cont2, INPUT);
pinMode(cont3,INPUT);

}

void loop() {

//Follwoing block giving name for input pins
int state1=digitalRead(cont1); 
int state2=digitalRead(cont2); 
int state3=digitalRead(cont3);

//Follwoing block for make sure that the angle for each servo is 0 degree
servo1.write(0);
servo2.write(0);
servo3.write(0);

// here main idea to use altera sonic sensor to detect the size
// of each box but it's diffcult to simulate this idea with proutes
// so we used a logic state to change the angle for sevo motor used

// Follwoing block for small box
if(state1==HIGH){  
servo1.write(90);
delay(15);
}

// Follwoing block for med box
if(state2==HIGH){
servo2.write(-90);
delay(15);
}

// Follwoing block for big box
if(state3==HIGH){
servo3.write(0);
delay(15);
}

}
