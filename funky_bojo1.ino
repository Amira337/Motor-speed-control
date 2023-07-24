int trig=2;
int echo=3;
int transistor=5;


long duration,distance;
void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(transistor, OUTPUT);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)*0.0343;
  Serial.println(distance);
  delay(5);
 
    for (int distance=2;distance<=200;distance++)    

 {
     for (int transistor=255;transistor>=0;transistor--)    
  {
    analogWrite(transistor,transistor);
    
   
  }
  }
  {
    for (int distance=200;distance>=0;distance--)    

    {
   
    for (int transistor=0;transistor<=255;transistor++)    
    {
        analogWrite(transistor,transistor);

    }
   
    }
  }
  if ( distance>200&&distance<=2) 
  {analogWrite(transistor,0);}

}
 
 
 

