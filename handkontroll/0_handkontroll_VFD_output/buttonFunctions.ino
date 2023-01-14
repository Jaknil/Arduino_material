//denne tab leser av knappene
void updateButtons() {
const int buttonDelay = 200;
  //Mål knappene
boolean buttonAdd = digitalRead(buttonAddPin);
boolean buttonSubtract = digitalRead(buttonSubtractPin);
if(buttonAdd && buttonSubtract){
  timer = 0;
  delay(buttonDelay);
} else{
if(buttonAdd == HIGH){
  timer++;
  if(timer>99){
    timer=99;
  }
  delay(buttonDelay);
}
if(buttonSubtract == HIGH && timer>0){
  timer--;
  delay(buttonDelay);
  }
}
}
