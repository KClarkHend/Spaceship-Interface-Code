int switchState = 0;

void setup() 
{
 
pinMode(3, OUTPUT); //pins connected to LEDs are OUTPUTS
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(2, INPUT); //switch pin is INPUT
}
//--------------------------------------------
void loop() 
// checks the voltage on inputs & turn outputs on/off
{

switchState = digitalRead(2); 
//checks the voltage in pin 2 & stores value in switchState variable
//switchState variable will get the value HIGH(or 1)
//no voltage results in the value LOW(or 0)

if (switchState == LOW) 
// the button is not pressed
  {
  digitalWrite(3, HIGH); // green LED
  digitalWrite(4, LOW); // red LED
  digitalWrite(5, LOW); // red LED
  }

  else
  // the button is pressed
  {
  digitalWrite(3, LOW); 
  digitalWrite(4, LOW); 
  digitalWrite(5, HIGH);

  delay(250); //waits for a quarter second
  //toggle the LEDs
  digitalWrite(4, HIGH); 
  digitalWrite(5, LOW);
  delay(250); // waits for a quarter second
  
    }
} // goes back to the beginning of the loop 
