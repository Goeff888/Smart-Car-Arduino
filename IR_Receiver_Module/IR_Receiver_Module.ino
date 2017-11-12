//www.elegoo.com
//2016.12.9

#include "IRReceiver.h"

int receiver = 11; // Signal Pin of IR receiver to Arduino Digital Pin 11


IRReceiver irrecv(receiver);     
    

//delay(500); // Do not get immediate repeat



void setup()   
{
  Serial.begin(9600);
  Serial.println("IR Receiver Button Decode"); 
  irrecv.StartIR(); // Start the receiver

}


void loop()  
{
  
  if (irrecv.decodeData(&results)) // have we received an IR signal?

  //{
    //translateIR(); 
    //irrecv.resume(); // receive the next value
  //}  
}


