/**
 * Displays text sent over the serial port (e.g. from the Serial Monitor) on
 * an attached LCD.
 */
#include <LiquidCrystal_I2C_Tiny.h>

//#include <Wire.h>
//#include <TinyWireM.h>
#include <SoftI2CMaster.h> 
//comment out all but one of the above library includes. 

//if using SoftI2CMaster (ie, on tiny841 or 828), uncomment this, otherwise comment out. 
SoftI2CMaster softi2c=SoftI2CMaster( 7, 2, 0 ); //sclPin=7, sdaPin=2

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
	lcd.begin();
	lcd.backlight();
  
	// Initialize the serial port at a speed of 9600 baud
	Serial.begin(9600);
}

void loop()
{
	// If characters arrived over the serial port...
	if (Serial.available()) {
		// Wait a bit for the entire message to arrive
		delay(100);
		// Clear the screen
		lcd.clear();

		// Write all characters received with the serial port to the LCD.
		while (Serial.available() > 0) {
			lcd.write(Serial.read());
		}
	}
}
