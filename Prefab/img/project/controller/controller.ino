/*
  Serial communication
  This program enables to send and recieve data via bluetooth in the board we designed. 
 */

#include <SoftwareSerial.h>  

  const byte rxPin = 0;
  const byte txPin = 1;

// set up a new serial object
SoftwareSerial mySerial (rxPin, txPin);

void setup() {
  // initialize digital pin 8 as an output.
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  //digitalWrite(7, HIGH);
  mySerial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 
 if (mySerial.read()=='c') //reads through the Rx pin if the input is 'c'.
{
  digitalWrite(7, HIGH); //switch on the LED's.
  digitalWrite(8, HIGH); //fpor troubleshooting
}
else 
{ 
  
}
 if (mySerial.read()=='e') // reads through the Rx pin if the input is 'e'.
{
  digitalWrite(7, LOW); //switch off the led's
  digitalWrite(8, LOW); //for trouble shooting
}
else 
{ 
  
}

}
