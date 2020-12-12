float InNumbers[]={0,0,0};   // initialize and declare the array
void setup() {
 
  Serial.begin(9600);
}

void loop() {
  
  if (Serial.available() >0)      // check if the serial is available
  {
    delay(400);
    InNumbers[0]=Serial.parseFloat();    //Serial.parseFloat() returns the first valid floating point number from the Serial buffer.The easiest way to read a Float is with the Serial.parseFloat() command
    InNumbers[1]=Serial.parseFloat();
    
    while (Serial.available( )>0)  // check if the serial is available
    {
      Serial.read();    // read data from user
    }  
    
    
     InNumbers[2]= InNumbers[0]+ InNumbers[1];   // addition of two input numbers
     Serial.print( InNumbers[2]);                // print at serial monitor
    
    
    
   }
          }
