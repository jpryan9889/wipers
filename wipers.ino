#include <Servo.h> //tells the compiler to use the Servo library
Servo myServo; // create a servo object or variable
 
//This works like variable declaration, but it has its own commands
//Commands and Library here: http://arduino.cc/en/reference/servo
 
void setup()
{
    Serial.begin(9600);
    myServo.attach(13);  //Associates servo with pin 9
    //myServo.detach(9); //disassociates servo with pin 9
    if (myServo.attached()) //*.attached() throws true if servo is attached
        Serial.println("Servo is attached");
    else
        Serial.println("Servo is not attached");
}
 
void loop()
{
for(int degree = 120; degree <= 179; degree++)
    {
    myServo.write(degree); //*.write(int) sets degree position of servo
    Serial.print("Servo is at position: ");
    Serial.println(myServo.read()); //*.read() returns the last value sent to the servo
    delay(50);
    }
 
for(int degree = 179; degree >= 120; degree--)
    {
    myServo.write(degree);
    Serial.print("Servo is at position: ");
    Serial.println(myServo.read());
    delay(15);
    }
}
