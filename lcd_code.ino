#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() 
{
  // initialize the LCD
  lcd.begin();
  lcd.setCursor(0,0); //sets position to the top left corner of the very first row 
  lcd.print("1"); //begins to print whatever is desired starting from the position above
  delay(900); //stays for 900 milliseconds
  lcd.clear(); //clears whole sceen; print commant from before is erased. 
  lcd.setCursor(0,1); // sets position to the left corner of the second row, keep in mind that the second row is not 2, it is 1,
                      // because stuff in coding starts from 0 
  lcd.print("2"); // prints whatever is desire on the second row 

}

void loop() {
  

}
 
//Make a counter using LCD. 
