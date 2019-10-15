// Sample code for just turning on a laser
/* Turns Laser On*/
int Laser = 6;
void setup ()
{
   pinMode (6, OUTPUT);
}
void loop () 
{
  digitalWrite(6, HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
}
