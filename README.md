# PIR-Based Smart Room Security and Intrusion Detection System

An Arduino-based room security prototype that uses a PIR (Passive Infrared) motion sensor to detect movement. When motion is detected, the system turns on a red LED and buzzer and prints an alert in the Serial Monitor.

**This project is simulated online using Wokwi. No physical hardware is required to run the simulation.**

## Online Simulation

🔗 **[Open the project in Wokwi](https://wokwi.com/projects/478945983434616833)**

## Project Objectives

- Detect motion using a PIR sensor.
- Provide a visual warning through an LED.
- Provide an audible warning through a buzzer.
- Display security status and intrusion alerts in the Serial Monitor.
- Demonstrate a low-cost room-security concept in an online simulation.

## Components Used

| Component | Purpose |
|---|---|
| Arduino Uno | Reads the sensor and controls the outputs |
| PIR motion sensor | Detects movement |
| Red LED | Visual indication when motion is detected |
| Buzzer | Audible alert when motion is detected |
| 200 Ω resistor | Limits current through the LED in the Wokwi circuit |
| Jumper wires | Connect the components in the circuit |

## Circuit Connections

| Component pin | Arduino / connection |
|---|---|
| PIR VCC | 5V |
| PIR OUT | Digital pin D2 |
| PIR GND | GND |
| Buzzer pin 1 | Digital pin D8 |
| Buzzer pin 2 | GND |
| Arduino D9 | 200 Ω resistor, then LED anode (+) |
| LED cathode (−) | GND |

The uploaded Wokwi diagram uses an Arduino Uno, PIR sensor, red LED, buzzer, and a 200 Ω resistor.

## How It Works

1. When the program starts, the Arduino initializes the PIR sensor input, LED output, buzzer output, and Serial Monitor.
2. The program waits **30 seconds** for the sensor to initialize.
3. After the wait, the Serial Monitor displays `SYSTEM ARMED`.
4. The Arduino continuously reads the PIR sensor's digital output.
5. When motion is detected (`HIGH`), the LED and buzzer turn on and the Serial Monitor prints `ALERT: INTRUDER DETECTED!`.
6. When motion is no longer detected (`LOW`), the LED and buzzer turn off and the Serial Monitor prints `Room Secure - No Motion`.
7. Status messages are printed when the motion state changes, rather than on every loop iteration.

## How to Run the Simulation

1. Open the [Wokwi project](https://wokwi.com/projects/478945983434616833).
2. Click **Start Simulation**.
3. Open the **Serial Monitor**.
4. Wait for the 30-second sensor initialization delay to finish and check for `SYSTEM ARMED`.
5. Select the PIR sensor and use its motion simulation control (for example, **Simulate Motion**, if shown).
6. Confirm that the red LED and buzzer activate and that the Serial Monitor displays the intrusion alert.
7. Stop the simulated motion and confirm that the outputs turn off and the secure-status message appears.

## Expected Serial Monitor Output

At startup:

```text
PIR Smart Room Security
Initializing sensor...
SYSTEM ARMED
```

When motion is detected:

```text
ALERT: INTRUDER DETECTED!
```

When motion stops:

```text
Room Secure - No Motion
```

The exact timing of sensor readings and messages can depend on the simulation and sensor behavior.

## Software and Files

- **Simulation platform:** [Wokwi](https://wokwi.com/)
- **Microcontroller model:** Arduino Uno
- **Programming language:** Arduino C/C++ (`.ino` sketch)

Suggested repository structure:

```text
PIR-Smart-Room-Security/
├── README.md
├── diagram.json
└── sketch.ino
```

If you organize the project into folders, keep the `README.md` at the repository root and update the file paths in this section to match your structure.

## Limitations

- This is a prototype simulation, not a tested physical security product.
- PIR sensors detect changes associated with movement; they do not identify a person or determine intent.
- The current program provides a local LED/buzzer alert and Serial Monitor message. It does not send phone notifications or connect to the internet.
- The 30-second startup delay is included to allow the sensor to initialize.

## Future Improvements

- Add a keypad or password-based arming/disarming feature.
- Add an LCD or OLED display for system status.
- Add Wi-Fi notifications using a suitable Wi-Fi-enabled board or module.
- Add event logging and configurable alarm behavior.
- Test and calibrate the design with physical hardware before real-world use.

## Author

**Project:** PIR-Based Smart Room Security and Intrusion Detection System  
**Platform:** Arduino Uno with Wokwi online simulation

---

*Created for educational and project-demonstration purposes.*
