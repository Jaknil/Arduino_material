//This tab sets up the display functions that the main program uses
void setupDisplay(){
lcd.init();  // initialize the lcd
lcd.backlight(); //Turns on the backlight
//Display welcome message
lcd.print("Handkontroll");
lcd.setCursor(0,1);  
lcd.print("til motorstyring");
delay(2000);
lcd.clear();//Empties the screen
lcd.setCursor(0,0);  
lcd.setCursor(0,0);  
lcd.print(vers);
lcd.setCursor(0,1);  
lcd.print(date);
delay(2000);
lcd.clear();

//Setup the fixed parts of the display
lcd.setCursor(0,0);  
lcd.print("   % STOPPED");
lcd.setCursor(0,1);  
lcd.print("        TIME:  s");
}
               
