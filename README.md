# Car Heater Blower Control with MOSFET
This repository contains code that can be used to control a car heater blower using an ESP8266 microcontroller and a MOSFET. The code implements a simple PWM-based control scheme to adjust the speed of the blower motor.

## Hardware Components
To use this code, you will need the following components:

- ESP8266 microcontroller board: This board is responsible for running the code and controlling the blower motor.
- MOSFET: The MOSFET acts as a switch to control the power supplied to the blower motor.
- Car Heater Blower Motor: The motor that generates airflow for the car's heating system.
- Button: A push-button switch is used to cycle through different fan speed settings.

## Wiring
Connect the hardware components as follows:

- Connect the gate pin of the MOSFET to pin D1 (GPIO 5) on the ESP8266 board.
- Connect the drain pin of the MOSFET to the positive terminal of the blower motor.
- Connect the source pin of the MOSFET to the ground of the power supply and the negative terminal of the blower motor.
- Connect the positive terminal of the power supply to the positive terminal of the blower motor.
- Connect the negative terminal of the power supply to the ground of the ESP8266 board.
- Connect one terminal of the button to pin D5 (GPIO 14) on the ESP8266 board and the other terminal to ground.

## Software Setup
To use this code:

- Make sure you have the Arduino IDE installed on your computer.
- Open the Arduino IDE and create a new sketch.
- Copy the code from the repository into the new sketch.
- Connect your ESP8266 board to your computer via USB.
- Select the appropriate board and port from the Tools menu in the Arduino IDE.
- Click the "Upload" button to compile and upload the code to your ESP8266 board.

## Usage
Once the code is uploaded to the ESP8266 board and the hardware is set up, you can use the system as follows:

- Apply power to the circuit.
- The blower motor is not running now (as it described in sketch, the initial duty cycle is 0% speed).
- Press the button to cycle through different fan speed settings.
- Each press of the button will increase the speed by 33%, cycling back to 0% after reaching 100%.
- Observe the changes in fan speed according to the duty cycle.
Note: Please take necessary precautions while working with electrical components.

## Contributions
Contributions to this project are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request on GitHub.

## License
This code is released under the MIT License. You can freely use and modify it for both personal and commercial projects. However, please include the original license text when redistributing the code.
