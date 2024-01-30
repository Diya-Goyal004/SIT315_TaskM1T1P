// Define the pin numbers
const int Sensor = 2; // Motion sensor connected to digital pin 2
const int ledPin = 13; // Built-in LED connected to digital pin 13

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Set the motion sensor pin as an input
  pinMode(Sensor, INPUT);
}

void loop() {
  // Read the value from the motion sensor
  int motionSensorValue = digitalRead(Sensor);

  // Print the sensor value to the Serial Monitor
  Serial.print("Motion Sensor: ");
  Serial.println(motionSensorValue);

  // Check if motion is detected
  if (motionSensorValue == HIGH) {
    // If motion is detected, turn on the LED
    digitalWrite(ledPin, HIGH);
    // Print the LED status to the Serial Monitor
    Serial.println("LED Status: ON");
  } else {
    // If no motion is detected, turn off the LED
    digitalWrite(ledPin, LOW);
    // Print the LED status to the Serial Monitor
    Serial.println("LED Status: OFF");
  }

  // Delay to avoid reading the sensor too quickly
  delay(500);
}
