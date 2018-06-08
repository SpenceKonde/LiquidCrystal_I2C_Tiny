# STOP - IF USING MY CORE, DO NOT USE THIS LIBRARY #
## MY CORE NOW HAS UNIVERSAL Wire.h LIBRARY, AND WILL WORK WITH UNMODIFIED LiquidCrystal_I2C LIBRARY ##


# Overview #
This fork of the LiquidCrystal_I2C library supports devices without hardware I2C support, using USI (like many tinies) or a full software implementation (for the 841 and 828). 

Include the appropriate library - Wire.h, TinyWireM.h, or SoftI2CMaster.h. 

If using SoftI2CMaster, you must also provide in your sketch:

```

SoftI2CMaster softi2c=SoftI2CMaster(sclPin,sdaPin,0);
//sclPin and sdaPin are the pins used for SCL and SDA respectively.

```

Use the versions of these libraries from my github to ensure compatibility. 

# Installation #
Create a new folder called "LiquidCrystal_I2C_Tiny" under the folder named "libraries" in your Arduino sketchbook folder.
Create the folder "libraries" in case it does not exist yet. Place all the files in the "LiquidCrystal_I2C_Tiny" folder.

# Usage #
To use the library in your own sketch, select it from *Sketch > Import Library*.

-------------------------------------------------------------------------------------------------------------------
This library is based on work done by DFROBOT (www.dfrobot.com) and fdebrabander
