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
}




void updateDisplay(){

  //Print potmeter data, can be moved to it's own tab
 byte percent = map(PWM,0,255,0,100);
 lcd.setCursor(0, 0); 
 if(percent==0){
  lcd.print("0% No speed  ");  
 } else{
  lcd.print(percent); 
  if(DIR==0){
  lcd.print("% FWD RUN "); 
  } else {
  lcd.print("% REV RUN ");
  }
 }
 lcd.setCursor(0, 1); 
 if(timer==0){
   lcd.print("0s No time set  ");
   } else {
    lcd.print(timer);
    if(PWM==0){
      lcd.print("s set time     ");
    }else{
      lcd.print("s remaining   ");
    }
       } lcd.setCursor(13, 0);
   
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
               
