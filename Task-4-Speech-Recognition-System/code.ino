String command = "";
int device = 8;

void setup() {
  pinMode(device, OUTPUT);
  Serial.begin(9600);
  Serial.println("Voice Control Ready");
}

void loop() {
  while (Serial.available()) {
    char c = Serial.read();
    command += c;
    delay(10);
  }

  if (command.length() > 0) {
    command.trim();   // remove extra spaces/newlines

    if (command == "on") {
      digitalWrite(device, HIGH);
      Serial.println("Device ON");
    }
    else if (command == "off") {
      digitalWrite(device, LOW);
      Serial.println("Device OFF");
    }

    command = "";  // clear command
  }
}
