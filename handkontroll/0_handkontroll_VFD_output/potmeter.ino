//This tab reads and displays the potentiometer value
void readPotMeter(){
// read the input on analog pin
  int sensorVerdi = analogRead(potMeterPin); 
//beregene ranges
const int deadZone = 50;
int reverseRange =1023/2-deadZone;
int forwardRange =1023/2+deadZone;
String message;
int percent;  
  //Check where it falls and print accordingly
  if(sensorVerdi<reverseRange){ //reverse dir
  percent = map(sensorVerdi,0,reverseRange,100,0); //map(value, fromLow, fromHigh, toLow, toHigh) 
 message="REVERSE"; 
 GO = 1;
 DIR =0;
  } 
  if(sensorVerdi>reverseRange && sensorVerdi<forwardRange){ //Stopped
  percent = 0;
  GO = 0; 
  message="       ";
  } 
 if(sensorVerdi>forwardRange){ //Forward
  percent = map(sensorVerdi,forwardRange,1023,0,100); //map(value, fromLow, fromHigh, toLow, toHigh) 
  message = "FORWARD";
  GO = 1;
 DIR =1; 
  } 

  //Print potmeter data, can be moved to it's own tab
 lcd.setCursor(0, 0); 
 lcd.print("   ");//Blank the space
   lcd.setCursor(0, 0); 
 lcd.print(percent); 
lcd.setCursor(0, 1); 
 lcd.print(message);
 
PWM = map(percent,0,100,0,255);
 return sensorVerdi;
 
}
