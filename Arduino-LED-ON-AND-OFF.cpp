const int ledPin = 13; //* This is to tell where the LED is located.
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}
void loop() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');
        if (input == "on") { //* You can change this .
            digitalWrite(ledPin, HIGH);
            Serial.println("LED turned on"); //* You can change this to if you want.
        }
        else if (input == "off") { //* You can also change this.
            digitalWrite(ledPin, LOW);
            Serial.println("LED turned off"); //* You can change this to if you want.

        }
        else {
          Serial.println("Ivalid command. Please type on or off.");
        }
    }
}
