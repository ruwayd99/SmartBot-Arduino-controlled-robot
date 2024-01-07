# SmartBot: Arduino Controlled Robot

## Introduction

This repository contains the Arduino code for controlling a robot equipped with claws for precise object manipulation, wheels for navigation, live camera streaming, and a sonar for movement detection. The robot's movements can be controlled using a smartphone app (utilized Blynk IoT).

Here is a picture of the finished robot:
![Robot picture](https://github.com/ruwayd99/SmartBot-Arduino-controlled-robot/assets/109923578/3f649b2b-a899-4de3-8cff-d4bb1ff08376)

I also have a google drive video of the robot in action: https://drive.google.com/file/d/1AiMfbfdPu-Ufo2i7-Uf3s8SzfJ7lCihy/view?usp=sharing

# Materials Used for the Arduino Controlled Robot Project

This section outlines the materials used for the Arduino-controlled robot project, providing an overview of the key components and hardware involved.

## Materials

1. **Arduino Mega:** The central microcontroller responsible for processing and executing commands to control various robot functionalities.

2. **Motor Driver L298N:** A motor driver module used to control the speed and direction of the motors, facilitating precise movement.

3. **Bread Board:** A prototyping board for creating temporary electrical connections and testing circuit designs.

4. **Bluetooth Module HC05:** Enables wireless communication between the robot and a smartphone app, allowing remote control.

5. **Motor and Wheels (4):** Four motors and wheels for the robot's mobility and navigation.

6. **Styrofoam:** Used for structural elements or as a lightweight material for various components.

7. **Medium Servo Motor MG995 (4):** Servo motors used for controlling the robotic claws and other mechanisms requiring precise movements.

8. **Medium Servo Motor MG996 (2):** Additional servo motors for specific tasks or movements within the robot.

9. **Metal Robotic Arm (2):** Robotic arms made of metal, potentially used for more robust and intricate tasks.

10. **Jump Wires:** Essential for creating electrical connections on the breadboard and ensuring proper signal transmission.

11. **Switch (2):** Switches used for turning specific functionalities on or off, adding a control element to the robot.

12. **Wifi Smart Camera:** A camera module with Wi-Fi capabilities, potentially used for live streaming or capturing images.

13. **Power Bank:** Provides a portable power source for the Arduino and other electronic components, ensuring mobility.

14. **Plastic Board:** A versatile material for creating a base or housing for the robot, providing a structural foundation.

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
