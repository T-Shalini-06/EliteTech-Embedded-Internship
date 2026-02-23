#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// I2C LCD Address (check that it is 0x20 in Tinkercad)
LiquidCrystal_I2C lcd(0x20, 16, 2);

int tempPin = A0;

void setup() {
  lcd.init();            // Initialize LCD
  lcd.backlight();       // Turn on backlight
  
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
}

void loop() {
  int sensorValue = analogRead(tempPin);

  // Convert analog reading to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert voltage to temperature in Celsius
  float temperatureC = voltage * 100.0;

  // Display temperature
  lcd.setCursor(0, 1);
  lcd.print(temperatureC, 1);   // Print with 1 decimal
  lcd.print(" C   ");           // Extra spaces clear old digits

  delay(1000);  // Update every 1 second
}
