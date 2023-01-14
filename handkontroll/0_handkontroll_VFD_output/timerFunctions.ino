//Denna tab tar tiden och printar resultatet
unsigned int nextSec = 0;
void updateTimer(){
//check ig 
unsigned int timeNow = millis();
if(timeNow>nextSec && PWM!=0 && timer>0){ //Only count down timer if the motor is running (and there is time left)
 timer--;
nextSec=timeNow+1000;
}

}
