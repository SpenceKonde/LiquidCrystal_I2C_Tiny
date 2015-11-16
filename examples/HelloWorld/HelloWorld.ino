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
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	lcd.backlight();
	lcd.print("Hello, world!");
}

void loop()
{
	// Do nothing here...
}