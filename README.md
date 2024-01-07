# SmartBot: Arduino Controlled Robot

## Introduction

This repository contains the Arduino code for controlling a robot equipped with claws for precise object manipulation, wheels for navigation, live camera streaming, and a sonar for movement detection. The robot's movements can be controlled using a smartphone app (utilized Blynk IoT).

Here is a picture of the finished robot:
![Alt text](Robot_picture.JPG)

## Code Overview for "Nights_Watch_main.io"

The main Arduino code is designed to interpret commands sent via Bluetooth from a smartphone app. It uses servo motors to control the robot's claws and various movements, as well as motors for wheel control. 

### Dependencies

- `SoftwareSerial`: A software library for serial communication over Bluetooth.
- `Servo`: A library for controlling servo motors.

### Main Loop

The loop function continuously reads commands sent via Bluetooth and executes corresponding actions. Motor control commands are interpreted to move the robot forward, backward, left, right, or stop. Servo control commands are used for precise movements.

### Usage
- Upload the Arduino code to your robot's microcontroller.
- Connect the necessary hardware components, including servos, motors, Bluetooth module, and sensors.
- Power on the robot and establish a Bluetooth connection with the smartphone app.
- Use the app to send commands for controlling the robot's movements, claws, and other functions.

## Code Overview for "Alarm_for_Nights_watch.io"

This section of the project involves an Arduino code for obstacle detection using an ultrasonic sensor. Additionally, a buzzer is employed to provide an alert when an obstacle is detected within a specified distance.

### Main implementation

The code utilizes an ultrasonic sensor connected to two pins (`trig` for trigger and `echo` for echo) to measure the distance to an obstacle. If the detected distance is within a predefined threshold (100 units in this example), a buzzer is activated to indicate the presence of an obstacle.

### Usage
- Connect the ultrasonic sensor to the specified trigger (trig) and echo (echo) pins.
- Connect the buzzer to the designated pins (in this case, pins 3 and 4).
- Upload the Arduino code to your microcontroller.
- Power on the system and observe the Serial Monitor for distance readings.
- The buzzer will be activated if an obstacle is detected within the defined threshold distance.
