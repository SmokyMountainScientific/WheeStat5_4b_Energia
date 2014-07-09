// reset tab
// Energia WheeStat5_4a sketch
// when status() is called, check to see if % signal was sent by GUI
//  if % signal is present, board is reset.

void status(){
 // boolean rsStatus;
  if(Serial.available()>0) {
    rsStatus = Serial.find("%");
  }
  if (rsStatus == true){
   digitalWrite(reset_pin,HIGH);    //blinks blue LED
   delay(500);
   digitalWrite(reset_pin,LOW);
   delay(500); 
    HWREG(NVIC_APINT) = NVIC_APINT_VECTKEY | NVIC_APINT_SYSRESETREQ;        
   digitalWrite(reset_pin,HIGH);
   delay(500);
   digitalWrite(reset_pin,LOW);
   delay(500); 

  }
}
