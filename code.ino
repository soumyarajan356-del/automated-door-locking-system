#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define SS_PIN 10
#define RST_PIN 5
#define SERVO_PIN 3

MFRC522 rfid(SS_PIN, RST_PIN);
Servo myServo;

// ✅ Your Authorized UID
byte authorizedUID[4] = {0x03, 0x91, 0x3A, 0x1A};

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();

  myServo.attach(SERVO_PIN);
  myServo.write(0);  // Door Closed

  Serial.println("Tap RFID Card");
}

void loop() {

  if (!rfid.PICC_IsNewCardPresent())
    return;

  if (!rfid.PICC_ReadCardSerial())
    return;

  bool accessGranted = true;

  // Compare scanned UID with stored UID
  for (byte i = 0; i < 4; i++) {
    if (rfid.uid.uidByte[i] != authorizedUID[i]) {
      accessGranted = false;
      break;
    }
  }

  if (accessGranted) {
    Serial.println("Access Granted ✅");
    myServo.write(90);   // Open
    delay(3000);
    myServo.write(0);    // Close
  } 
  else {
    Serial.println("Access Denied ❌");
  }

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}
