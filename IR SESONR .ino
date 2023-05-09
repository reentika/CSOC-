//code to read values coming from sensor
// check in the serial monitor 
// 1 means inactivated sensor
// 0 means activated.
int ir =7;
int led =8; 
int x; 
void setup() 
{
  Serial.begin(9600);
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);

}

void loop() 
{
  x = digitalRead(ir);
  Serial.println(x);
  delay(300);
  if (x==1)
  {
    digitalWrite(8,LOW);
  
  }

  else 
  {
    digitalWrite(8,HIGH);
  }
}
