//www.elegoo.com
//2016.12.9

#include "IR_Receiver.h"

int receiver = 11; // Signal Pin of IR receiver to Arduino Digital Pin 11

/*-----( Declare objects )-----*/
IR_Reciever irrecv(receiver);     // create instance of 'irrecv'
      // create instance of 'decode_results'

delay(500); // Do not get immediate repeat

}

void setup()   
{
  Serial.begin(9600);
  Serial.println("IR Receiver Button Decode"); 
  irrecv.enableIRIn(); // Start the receiver

}


void loop()  
{
  
  if (irrecv.decode(&results)) // have we received an IR signal?

  {
    translateIR(); 
    irrecv.resume(); // receive the next value
  }  
}


