char data;
int device = 8;

void setup() {
  pinMode(device, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(device, HIGH);
    }

    if (data == '0') {
      digitalWrite(device, LOW);
    }
  }
}
