//This tab reads and displays the potentiometer value
void readPotMeter(){
// read the input on analog pin
  int sensorVerdi = analogRead(potMeterPin); 
//beregene ranges
const int deadZone = 50;
int reverseRange =1023/2-deadZone;
int forwardRange =1023/2+deadZone;
  //Check where it falls and print accordingly
  if(sensorVerdi<reverseRange){ //reverse dir
  PWM = map(sensorVerdi,0,reverseRange,255,0); //map(value, fromLow, fromHigh, toLow, toHigh) 
  DIR =1;
  } 
  if(sensorVerdi>reverseRange && sensorVerdi<forwardRange){ //Stopped
  PWM = 0;
  } 
 if(sensorVerdi>forwardRange){ //Forward
  PWM = map(sensorVerdi,forwardRange,1023,0,255); //map(value, fromLow, fromHigh, toLow, toHigh) 
  DIR =0; 
  } 
 return sensorVerdi;
 }
