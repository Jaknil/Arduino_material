//Denna tab tar tiden och printar resultatet
unsigned int nextSec = 0;
void updateTimer(){
//check ig 
unsigned int timeNow = millis();
if(timeNow>nextSec && GO==1 && timer>0){ //Only count down timer if the motor is running (and there is time left)
 timer--;
lcd.setCursor(5, 0); //Can be moved, depends on GO status
 lcd.print("RUN    ");
nextSec=timeNow+1000;
}

if(timer==0 || GO==0){ //Can be moved, clean print depending on globals
lcd.setCursor(5, 0); 
 lcd.print("STOPPED");  
}

lcd.setCursor(13, 1);
 lcd.print("  ");
lcd.setCursor(13, 1);
 lcd.print(timer);
}
