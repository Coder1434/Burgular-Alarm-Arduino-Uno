# Burglar Alarm Wiring Guide

A simple motion-triggered alarm using an Arduino Uno, PIR sensor, buzzer, and LED indicator.

## Components Needed

- Arduino Uno
- PIR Motion Sensor (e.g. HC-SR501)
- Piezo Buzzer
- LED
- 220Ω–330Ω Resistor
- Breadboard
- Jumper Wires

---

## Wiring Steps

### 1) Power the Breadboard
- Connect the Arduino 5V pin to the breadboard positive rail.
- Connect the Arduino GND pin to the breadboard negative rail.

### 2) Connect the PIR Motion Sensor
- VCC → 5V
- GND → GND
- OUT / SIGNAL → Arduino Pin 2

This sensor detects motion and sends a HIGH signal to the Arduino when movement is detected.

### 3) Connect the LED Indicator
- LED anode (long leg) → 220Ω–330Ω resistor
- Resistor → Arduino Pin 3
- LED cathode (short leg) → GND

The LED will turn on when motion is detected.

### 4) Connect the Buzzer
- Buzzer positive (+) → Arduino Pin 4
- Buzzer negative (-) → GND

The buzzer sounds when the alarm is triggered.

---

## Quick Connection Summary

| Component | Connection |
|-----------|------------|
| PIR VCC | 5V |
| PIR GND | GND |
| PIR OUT | Arduino Pin 2 |
| LED Anode | 220Ω–330Ω resistor → Arduino Pin 3 |
| LED Cathode | GND |
| Buzzer + | Arduino Pin 4 |
| Buzzer - | GND |

---

## Tips and Tricks

### PIR Sensor Calibration
Most PIR sensors have two small potentiometers on the back:
- One adjusts sensitivity
- One adjusts the time delay (how long the output stays HIGH after detecting motion)

Adjust these carefully for best detection range and alarm behavior.

### False Triggers
PIR sensors often need a short warm-up period after power-up:
- Usually 30–60 seconds
- During this time, the sensor may behave oddly or trigger unexpectedly

Keep the sensor away from:
- Direct sunlight
- Heat sources
- HVAC vents
- Moving trees or objects that can cause constant motion

### Best Placement
- Mount the PIR sensor at a height where it sees movement across a room
- Avoid pointing it directly at a window or bright light source
- Test the detection range before final installation

---

## Final Notes
This setup is ideal for a basic motion alarm system. Once the PIR sensor detects movement, the Arduino can trigger the buzzer and LED to alert you.

If you want, I can also turn this into:
- a more professional README layout
- a wiring diagram using ASCII art
- a version with emojis and cleaner section styling
