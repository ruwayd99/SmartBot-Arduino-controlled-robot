#include <SoftwareSerial.h> // TX RX software library for bluetooth

#include <Servo.h> // servo library 
Servo myservo1, myservo2, myservo3, myservo4, myservo5, myservo6; // servo name

int bluetoothTx = 10; // bluetooth tx to 10 pin
int bluetoothRx = 11; // bluetooth rx to 11 pin

SoftwareSerial bluetooth(bluetoothTx, bluetoothRx);
//

String readString;

int trig= 13;
int echo = 12;
long distance;
long duration;


void setup()
{

  myservo1.write(0);
  myservo2.write(0);
  myservo3.write(180);

  myservo4.write(180);
  myservo5.write(180.0);
  myservo6.write(180);
  //
  
  myservo1.attach(2); // attach servo signal wire to pin 9
  myservo2.attach(3);
  myservo3.attach(4);
  
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  
  //Setup usb serial connection to computer
  Serial.begin(9600);

  //Setup Bluetooth serial connection to android
  bluetooth.begin(9600);
  //

pinMode (trig, OUTPUT);
pinMode (echo, INPUT);

  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
}

void loop() {
    
  //Read from bluetooth and write to usb serial
  if(bluetooth.available()>= 2 )
  {
    unsigned int servopos = bluetooth.read();
    unsigned int servopos1 = bluetooth.read();
    unsigned int realservo = (servopos1 *256) + servopos;
    Serial.println(realservo);


    if (realservo == 8000)     //Text from android to go Forward
    {
      digitalWrite(22,HIGH);
      digitalWrite(23,LOW);
      digitalWrite(24,HIGH);
      digitalWrite(25,LOW);

      analogWrite(9,255);
      analogWrite(8,255);
      delay(1000);
    }


    if (realservo == 10000)    //Text from android back
    {
      digitalWrite(22,LOW);
      digitalWrite(23,HIGH);
      digitalWrite(24,LOW);
      digitalWrite(25,HIGH);

      analogWrite(9,255);
      analogWrite(8,255);
    }
    if (realservo == 12000)   //Text from android  right
    {
      digitalWrite(22,LOW);
      digitalWrite(23,HIGH);
      digitalWrite(24,HIGH);
      digitalWrite(25,LOW);

      analogWrite(9,255);
      analogWrite(8,255);
    }
    if (realservo == 11000)  //Text from android left
    {
      digitalWrite(22,HIGH);
      digitalWrite(23,LOW);
      digitalWrite(24,LOW);
      digitalWrite(25,HIGH);

      analogWrite(9,255);
      analogWrite(8,255);
    }
     if (realservo == 9000)  //Text from android stop
    {
      digitalWrite(22,LOW);
      digitalWrite(23,LOW);
      digitalWrite(24,LOW);
      digitalWrite(25,LOW);

      analogWrite(9,255);
      analogWrite(8,255);
    }
   
    
    if (realservo >= 1000 && realservo <1180) {
      int servo1 = realservo;
      servo1 = map(servo1,1000 , 1180, 0, 180);
      myservo1.write(servo1);
      Serial.println("Servo 1 ON");
      delay(10);
    }
    if (realservo >= 2000 && realservo <2180) {
      int servo2 = realservo;
      servo2 = map(servo2,2000 , 2180, 0, 180);
      myservo2.write(servo2);
      Serial.println("Servo 2 ON");
      delay(10);
    }
    if (realservo >= 3000 && realservo <3180) {
      int servo3 = realservo;
      servo3 = map(servo3,3000 , 3180, 180, 0);
      myservo3.write(servo3);
      Serial.println("Servo 3 ON");
      delay(10);
    }
    if (realservo >= 4000 && realservo <4180) {
      int servo4 = realservo;
      servo4 = map(servo4,4000 , 4180, 180, 0);
      myservo4.write(servo4);
      Serial.println("Servo 4 ON");
      delay(10);
    }

    
    if (realservo >= 5000 && realservo <5180) {
      int servo5 = realservo;
      servo5 = map(servo5,5000 , 5180, 180, 0);
      myservo5.write(servo5);
      Serial.println("Servo 5 ON");
      delay(10);
    }
    if (realservo >= 6000 && realservo <6180) {
      int servo6 = realservo;
      servo6 = map(servo6,6000 , 6180, 180, 0);
      myservo6.write(servo6);
      Serial.println("Servo 6 ON");
      delay(10);
    }
  }
}


