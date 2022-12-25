#include <Servo.h>
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int in;
void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0)
  {
    /*
     * 1 - attach
     * 2 - dettach
     * 3 - 90
     * 4 - 0
     */
   in = Serial.read();
   Serial.println("Servo status: " + String(((myservo.attached())?"Attached":"Detached")) );
   if (in == 10)continue;
   if(in == 48)myservo.attach(9);
   else if(in == 49)myservo.detach();
   else if(in == 50)myservo.write(120);
   else if(in == 51)myservo.write(-30);
   
  }
}