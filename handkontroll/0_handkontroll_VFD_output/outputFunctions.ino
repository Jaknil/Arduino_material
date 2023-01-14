//here we send the signals to the VFD
void updateOutputs(){

//Run the motor only when time and pwm is on 
if(PWM!=0 && timer>0){ 
  GO=1;
} else{
  GO=0;
}
  
  analogWrite(pwmPin,PWM);
digitalWrite(dirPin,DIR);
digitalWrite(goPin,GO);
}
