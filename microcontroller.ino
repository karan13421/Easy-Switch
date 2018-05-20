#include<SoftwareSerial.h>

int blueTx=2;
int blueRx=3;

const int device1=4;
const int device2=5;
const int device3=6;
const int device4=7;

SoftwareSerial bluetooth(blueTx,blueRx);

void setup() {
 Serial.begin(9600);
 
 pinMode(device1,OUTPUT);
 pinMode(device2,OUTPUT);
 pinMode(device3,OUTPUT);
 pinMode(device4,OUTPUT);
 
 bluetooth.begin(9600);
}

int look=0;
void loop() 
{
if(bluetooth.available()> 0)//reveive no from bluetooth
  {
    look=bluetooth.read();
    Serial.print(look);
  }

  
  if(look==10)
  {
    digitalWrite(device1,HIGH);
  }
  if(look==11)
  {
    digitalWrite(device1,LOW);
  }

  if(look==21)
  {
    digitalWrite(device2,HIGH);
  }
  if(look==20)
  {
    digitalWrite(device2,LOW);
  }

  if(look==31)
  {
    digitalWrite(device3,HIGH);
  }
  if(look==30)
  {
    digitalWrite(device3,LOW);
  }

  if(look==41)
  {
    digitalWrite(device4,HIGH);
  }
  if(look==40)
  {
    digitalWrite(device4,LOW);
  }



  
}
