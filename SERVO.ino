#include<Servo.h>
Servo s1;

void setup() {
  s1.attach(8); //serbo attached to pin 9 on arduino 

}

void loop() {
  // method 1: (makes abrupt motions)
  s1.write(0);   
  delay(400);
  s1.write(40);
  delay(9);
  s1.write(0);
 


  //method 2: for loop

  //for (int i=0; i<90; i+=1) {  //goes throw 0-180, one degree at a time 
   // s1.write(i);
  //  delay(15);
  //}
  //for (int i=90; i>=0; i-= 1){ //goes back the same way
  //  s1.write(i);
   // delay(15);
  //}
}

//CHALLANGE - make this into a hand waving motion
