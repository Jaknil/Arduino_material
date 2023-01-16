const String vers = "Version 1.2";
const String date = "Date 16.01.2023"; 
#include <LiquidCrystal_I2C.h>
  LiquidCrystal_I2C lcd(0x27,16,2);
//0x27 er adressen, man kan ha 128 st på samme arduino pins om de har ulike adress
//16 er antall  tegn per rad, 2 er rader
  
#define potMeterPin A0
#define buttonSubtractPin 2
#define buttonAddPin 3
#define pwmPin 11
#define dirPin 12
#define goPin 13

//Variables
byte timer = 0;
boolean GO = 0; //0 is stopped, 1 is run
boolean DIR = 0; //1 is reverse 0 is forward
byte PWM = 0; //the rotation speed 0-255

void setup() {
//Setup in and outputs
pinMode(potMeterPin, INPUT);
pinMode(buttonAddPin,INPUT); 
pinMode(buttonSubtractPin,INPUT); 
pinMode(pwmPin,OUTPUT);
pinMode(dirPin,OUTPUT);
pinMode(goPin,OUTPUT);
  // print welcome message and setup static text
setupDisplay();
}

void loop() {
readPotMeter();
updateButtons();
updateTimer();
updateOutputs();
updateDisplay();
delay(20);
}
