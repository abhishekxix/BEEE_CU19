//Each button press toggles LED on or off depending upon the current status of the LED.
void setup()
{
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  }

int input = 0;

void loop()
{
  
  input += digitalRead(8);
   if(input % 2 != 0 && input != 0)
   {
     digitalWrite(9,HIGH);
   }
  else digitalWrite(9,LOW);
  
  
}
