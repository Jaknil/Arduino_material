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




void updateDisplay(){

  //Print potmeter data, can be moved to it's own tab
 byte percent = map(PWM,0,255,0,100);
 lcd.setCursor(0, 0); 
 lcd.print("   ");//Blank the space
   lcd.setCursor(0, 0); 
 lcd.print(percent); 


//Print motor status
lcd.setCursor(5, 0); 
if(GO==1 && timer>0){
lcd.print("RUN    ");
} else {
lcd.print("STOPPED");  
}


lcd.setCursor(0, 1); 
 String message;
 if(PWM!=0){
  if (DIR==1){
    message="REVERSE"; 
  } else {
    message="FORWARD";
  } 
 } else
    message="       ";
 lcd.print(message);

//Print timer status
lcd.setCursor(13, 1);
 lcd.print("  ");
lcd.setCursor(13, 1);
 lcd.print(timer); 

 lcd.setCursor(13, 0);
boolean pwmOn = (PWM!=0);
 if (PWM!=0){
  lcd.print("H");
 } else{
  lcd.print("L");
 }
 if (DIR==1){
  lcd.print("H");
 } else{
  lcd.print("L");
 }
 if (GO==1){
  lcd.print("H");
 } else{
  lcd.print("L");
 }

}
               
