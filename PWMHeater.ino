// Define the pin number for the motor control pin
#define MOTOR_PIN 5 // D1

// Define the pin number for the button input pin
#define BUTTON_PIN 14 // D5

// Define the four PWM duty cycles to cycle through
const int DUTY_CYCLES[] = {0, 33, 66, 100};

// Initialize variables for tracking the current duty cycle and button state
int current_duty_cycle_idx = 0;
int button_state = HIGH;

void setup() {
  // Set up the motor control pin as a PWM output
  pinMode(MOTOR_PIN, OUTPUT);
  analogWriteFreq(1000);

  // Set up the button input pin with a pull-up resistor
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Set the initial PWM duty cycle
  analogWrite(MOTOR_PIN, DUTY_CYCLES[current_duty_cycle_idx]);
}

void loop() {
  // Read the current state of the button
  int new_button_state = digitalRead(BUTTON_PIN);

  // If the button has been pressed since the last loop iteration, cycle to the next duty cycle
  if (button_state == HIGH && new_button_state == LOW) {
    current_duty_cycle_idx = (current_duty_cycle_idx + 1) % 4;
    analogWrite(MOTOR_PIN, DUTY_CYCLES[current_duty_cycle_idx]);
  }

  // Update the button state variable for the next loop iteration
  button_state = new_button_state;

  // Add a brief delay to debounce the button input
  delay(50);
}
