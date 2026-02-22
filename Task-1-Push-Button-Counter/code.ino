#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int buttonPin = 7;
int count = 0;
int buttonState = HIGH;
int lastButtonState = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  lcd.begin(16, 2);
  lcd.print("Count:");
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW && lastButtonState == HIGH) {
    count++;
    lcd.setCursor(0, 1);
    lcd.print("    ");      // clear old digits
    lcd.setCursor(0, 1);
    lcd.print(count);
    delay(200);
  }

  lastButtonState = buttonState;
}
