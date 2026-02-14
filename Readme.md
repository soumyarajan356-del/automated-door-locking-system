<p align="center">
  <img src="./img.png" alt="Project Banner" width="100%">
</p>

# [Project Name] 🎯 AUTOMATED DOOR LOCK

## Basic Details

### Team Name: Mego

### Team Members
- Member 1: Megha Biju College of engineering and management punnapra
- Member 2: Gopika G Nath College of engineering and management punnapra

### Hosted Project Link
[mention your project hosted link here]

### Project Description
This project is an RFID-based smart door lock system using Arduino UNO and a servo motor.
Only authorized RFID cards (specific UIDs) can unlock the door, while unauthorized cards are denied access.
It provides a simple and secure electronic access control system for homes or offices. 🔐

### The Problem statement
This project solves the problem of unauthorized access and traditional key dependency.
Instead of using physical keys (which can be lost, duplicated, or stolen), the system allows only pre-registered RFID cards to unlock the door. This increases security, convenience, and controlled access, making it useful for homes, labs, offices, or restricted areas

### The Solution
[6:08 am, 14/02/2026] Gopika Annachii🐒: We are solving the problem by replacing traditional keys with an RFID-based authentication system.
The RFID reader scans the card’s unique UID and sends it to the Arduino. The Arduino compares the scanned UID with the stored authorized UIDs. If they match, it activates the servo motor to unlock the door; if not, access is denied.
This ensures secure, controlled, and keyless access to the system. 🔐



---

## Technical Details

### Components Used

- Main components: Arduino UNO – The main controller that processes the RFID data and controls the servo motor.
 RC522 RFID Reader Module – Reads the UID of the RFID card/tag.
 RFID Card/Tag – Used for authentication (only authorized UID works).
 SG90 Servo Motor – Acts as the locking mechanism (rotates to lock/unlock).
Jumper Wires – For connections between components.
 USB Cable / 5V Power Supply – Powers the Arduino
- Specifications: 1. Microcontroller
Arduino UNO
Operating Voltage: 5V
Digital I/O Pins: 14
Clock Speed: 16 MHz
🔹 2. RFID Module
RC522 RFID Reader
Operating Voltage: 3.3V
Frequency: 13.56 MHz
Communication: SPI
🔹 3. Servo Motor
SG90 Micro Servo
Operating Voltage: 4.8V – 6V
Rotation: 0°–180°
Torque: ~1.8 kg/cm
🔹 4. RFID Cards/Tags
Frequency: 13.56 MHz
Unique UID for authentication
🔹 5. Power Supply
5V via USB or external regulated supply
- Tools required: Breadboard
Jumper wires (Male–Male)
USB cable for Arduino
Arduino IDE (for programming)
Laptop/PC
Small screwdriver (for mounting)

---

## Features

List the key features of your project:
- Feature 1: Secure Access Control – Only pre-registered RFID cards (specific UIDs) can unlock the door.
2️⃣ Keyless Entry System – Eliminates the need for traditional mechanical keys.
3️⃣ Fast Authentication – Door unlocks instantly after scanning an authorized card.
4️⃣ Automatic Relocking – Servo returns to lock position after a few seconds.
5️⃣ User-Specific Access – Different RFID cards can trigger different actions (e.g., 90° or 180° rotation)

---

## Implementation

#### Components Required
Arduino UNO
Microcontroller: ATmega328P
Operating Voltage: 5V
Input Voltage: 7–12V (recommended)
Digital I/O Pins: 14
Analog Pins: 6
Clock Speed: 16 MHz
Used as the main controller to process RFID data and control the servo.
 RC522 RFID Reader Module
Operating Voltage: 3.3V
Operating Frequency: 13.56 MHz
Communication Protocol: SPI
Current Consumption: ~13–26 mA
Reading Distance: 2–5 cm
 Reads the UID of RFID card/tag.
 RFID Card / Tag
Frequency: 13.56 MHz
Unique 4-byte or 7-byte UID
Passive (no battery required)
 Used for authentication.
SG90 Micro Servo Motor
Operating Voltage: 4.8V – 6V
Rotation Range: 0°–180°
Torque: ~1.8 kg/cm
Control Signal: PWM  
 Acts as door locking mechanism.
Power Supply
5V via USB
OR
External regulated 5V supply
 Powers the Arduino and components.
 Supporting Components
Breadboard
Jumper wires (Male–Male)
USB Cable
Laptop with Arduino IDE

#### Circuit Setup
 RC522 RFID → Arduino UNO (SPI Connections)
Connect like this:
RC522 Pin
Arduino UNO Pin
SDA
D10
SCK
D13
MOSI
D11
MISO
D12
RST
D9
GND
GND
3.3V
3.3V ⚠
⚠ VERY IMPORTANT:
➡ RC522 must be connected to 3.3V, NOT 5V.
🔄 2️⃣ Servo Motor → Arduino UNO
Your servo wires:
🟤 Brown → GND
🔴 Red → 5V
🟡 Yellow/Orange → D6
So connect:
Servo Wire
Arduino Pin
Brown
GND
Red
5V
Yellow
D6
🔋 3️⃣ Power Setup
Power Arduino using USB.
RC522 gets 3.3V from Arduino.
Servo gets 5V from Arduino.
⚠ If servo causes Arduino to reset:
Use external 5V supply for servo.
Connect external GND and Arduino GND together (common ground).


---

## Project Documentation

#### Schematic & Circuit

Circuit.png


+-------------------+
        |     Arduino Uno   |
        |                   |
        | 3.3V  -------- RFID VCC
        | GND   -------- RFID GND
        | D5    -------- RFID RST
        | D10   -------- RFID SDA
        | D11   -------- RFID MOSI
        | D12   -------- RFID MISO
        | D13   -------- RFID SCK
        |                   |
        | 5V    -------- Servo Red
        | GND   -------- Servo Brown
        | D3    -------- Servo Orange
        +-------------------+


#### Build Photos

Team.png

components.png

Build.png

Final.png

---

#### Bill of Materials (BOM)

| Component | Quantity | Specifications | Price | Link/Source |
|-----------|----------|----------------|-------|-------------|
| Arduino Uno | 1 | ATmega328P, 16MHz | ₹450 | [Link] |
| LED | 5 | Red, 5mm, 20mA | ₹5 each | [Link] |
| Resistor | 5 | 220Ω, 1/4W | ₹1 each | [Link] |
| Breadboard | 1 | 830 points | ₹100 | [Link] |
| Jumper Wires | 20 | Male-to-Male | ₹50 | [Link] |
| [Add more...] | | | | |

**Total Estimated Cost:** College MakeaSpace

#### Assembly Instructions

**Step 1: Prepare Components**
(images/assembly-step1.jpg)

**Step 2: Build the Power Supply**

(images/assembly-step2.jpg)

**Step 3: Add Components**

(images/assembly-step3.jpg)


**Step 4: [Continue for all steps...]**

**Final Assembly:**
(images/final-build.jpg)


---

## Project Demo

### Video
https://youtu.be/Y4IfmnhGTJI?si=xp3LJy-IgobGOQMr

Secure Access Control
Only pre-programmed RFID cards (authorized UIDs) can unlock the system.
2️⃣ Keyless Entry
Eliminates the need for traditional mechanical keys.
3️⃣ Fast Authentication
Door unlocks instantly after scanning a valid card.
4️⃣ Automatic Locking
Servo motor returns to lock position after a few seconds.
5️⃣ Low Cost & Easy Implementation
Built using simple components like Arduino, RC522, and SG90 servo.
6️⃣ Expandable Design
Can be upgraded with keypad, buzzer, LCD display, or IoT control.
Working Principle
1️⃣ The RFID card is placed near the RC522 reader.
2️⃣ The RC522 reads the card’s unique UID.
3️⃣ Arduino compares the scanned UID with stored authorized UIDs.
4️⃣ If the UID matches → Arduino sends a PWM signal to the servo motor.
### Additional Demos
[Add any extra demo materials/links - Live site, APK download, online demo, etc.]


## Team Contributions

-Megha Biju : hardware design and circuit setup
-Gopika G Nath : programming and software development
 

---

## License

This project is licensed under the [MIT] License - see the [LICENSE](LICENSE) file for details.

---

Made with ❤️ at TinkerHub
