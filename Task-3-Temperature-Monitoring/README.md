Objective

Design a system to measure temperature using a sensor and display it on an LCD.

Components Used

Arduino UNO

TMP36 Temperature Sensor

16x2 LCD (I2C – MCP23008 based)

Jumper Wires

Working Principle

The TMP36 sensor outputs voltage proportional to temperature.
The Arduino reads the analog value from A0, converts it to temperature in Celsius using the TMP36 formula, and displays the temperature on the I2C LCD.

Simulation Platform

Tinkercad Circuits
