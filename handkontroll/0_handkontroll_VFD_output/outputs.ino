//here we send the signals to the VFD
void updateOutputs(){
  analogWrite(pwmPin,PWM);
digitalWrite(dirPin,DIR);
digitalWrite(goPin,GO);
lcd.setCursor(13, 0);
boolean pwmOn = (PWM!=0);
 lcd.print(pwmOn);
 lcd.print(DIR);
 lcd.print(GO);
}
