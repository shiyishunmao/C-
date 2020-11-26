int buttonState = 0;
int beforeState = 0;
int a=0;
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}
void loop() 
{
      int buttonState = digitalRead(7);
      if(buttonState==1 and beforeState==0)
     {
      a=a+1;
      Serial.println(a);
      }
      if(buttonState!=beforeState){
          delay(50);
      }
      if (buttonState == HIGH)
      {
        digitalWrite(13, HIGH);
      }
      if (buttonState == LOW)
      {
        digitalWrite(13, LOW);
      }
      beforeState=buttonState;
}
