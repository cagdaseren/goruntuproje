void setup() {
 pinMode(13,OUTPUT);
 Serial.begin(9600);

}

void loop() {
if(Serial.available())
{int a=Serial.read();
if(a=='1')
{
  digitalWrite(2,HIGH);
}
else
{
  digitalWrite(2,LOW);
  }
if(a=='2')
{
  digitalWrite(3,HIGH);
}
else
{
  digitalWrite(3,LOW);
  }
if(a=='3')
{
  digitalWrite(4,HIGH);
}
else
{
  digitalWrite(4,LOW);
  }
if(a=='4')
{
  digitalWrite(5,HIGH);
}
else
{
  digitalWrite(5,LOW);
  }
if(a=='5')
{
  digitalWrite(6,HIGH);
}
else
{
  digitalWrite(6,LOW);
  }
if(a=='6')
{
  digitalWrite(7,HIGH);
}
else
{
  digitalWrite(7,LOW);
  }
if(a=='7')
{
  digitalWrite(8,HIGH);
}
else
{
  digitalWrite(8,LOW);
  }
if(a=='8')
{
  digitalWrite(9,HIGH);
} 
else
{
  digitalWrite(9,LOW);
  }
if(a=='9')
{
  digitalWrite(10,HIGH);
}
else
{
  digitalWrite(10,LOW);
  }

}
}
