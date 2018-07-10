float vout1 = 0;;
float value1 = 0;
float vout2 ;
float value2 = 0;
int fan = 19;
const int ledPin =  13;
int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 200;
#define seg1A 6
#define seg1B 7
#define seg1C 8
#define seg1D 9
#define seg1E 10
#define seg1F 11
#define seg1G 12
#define GND1 4
#define GND2 5
#define GND3 3

#define seg2A 22
#define seg2B 23
#define seg2C 2
#define seg2D 31
#define seg2E 30
#define seg2F 28
#define seg2G 29
#define GND4 14
#define GND5 15
#define GND6 16 

void digit10 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 0);  
} 
void digit11 () {  
  digitalWrite(seg1A, 0);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 0);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 0);  
  digitalWrite(seg1G, 0);  
}  
void digit12 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 0);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 0);  
  digitalWrite(seg1G, 1);  
} 
void digit13 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 0);  
  digitalWrite(seg1G, 1);  
}
void digit14 () {  
  digitalWrite(seg1A, 0);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 0);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);  
}
void digit15 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 0);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);  
}
void digit16 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 0);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);  
}
void digit17 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 0);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 0);  
  digitalWrite(seg1G, 0);  
}
void digit18 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);  
}
void digit19 () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 0);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);  
}
void a () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 1);  
  digitalWrite(seg1C, 1);  
  digitalWrite(seg1D, 0);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 1);
  for (int i = 0; i < 40; i++)
 {digitalWrite(GND1, 0); 
  digitalWrite(GND2, 255);
  digitalWrite(GND3, 255);}
  for (int i = 0; i < 1; i++)
 {digitalWrite(GND1, 255); 
  digitalWrite(GND2, 255);
  digitalWrite(GND3, 255);}
}
void c () {  
  digitalWrite(seg1A, 1);  
  digitalWrite(seg1B, 0);  
  digitalWrite(seg1C, 0);  
  digitalWrite(seg1D, 1);  
  digitalWrite(seg1E, 1);  
  digitalWrite(seg1F, 1);  
  digitalWrite(seg1G, 0);
  for (int i = 0; i < 40; i++)
 {digitalWrite(GND1, 255); 
  digitalWrite(GND2, 0);
  digitalWrite(GND3, 255);}
  for (int i = 0; i < 1; i++)
 {digitalWrite(GND1, 255); 
  digitalWrite(GND2, 255);
  digitalWrite(GND3, 255);}
}
void showdigit1 (int digit1)  
{  
  switch (digit1) {  
  case 0:  
   digit10 ();  
   break;  
  case 1:  
   digit11 ();  
   break;  
  case 2:  
   digit12 ();  
   break;  
  case 3:  
   digit13 ();  
   break;  
  case 4:  
   digit14 ();  
   break;  
  case 5:  
   digit15 ();  
   break;  
  case 6:  
   digit16 ();  
   break;  
  case 7:  
   digit17 ();  
   break;  
  case 8:  
   digit18 ();  
   break;  
  case 9:  
   digit19 ();  
   break;  
   default:  
   break;  
  } 
}
// showing 4 digits  
void showdigits1 (int number1)  
{  
  // e.g. we have "1234"  
  showdigit1(number1/100); 
  digitalWrite(GND1, 0);
  digitalWrite(GND2, 1);
  digitalWrite(GND3, 1);  
  delay (2);
  digitalWrite(GND1, 1);
  digitalWrite(GND2, 1);
  digitalWrite(GND3, 1);
  delay (1);
  number1 = number1%100;
  digitalWrite(GND1, 1); 
  showdigit1(number1/10);
  digitalWrite(GND2, 0);
  delay (2);
  digitalWrite(GND1, 1);
  digitalWrite(GND2, 1);
  digitalWrite(GND3, 1);
  delay (1);
  number1 =number1%10;    
  digitalWrite(GND2, 1);  
  showdigit1(number1/1);  
  digitalWrite(GND3, 0);
  delay (2);
  digitalWrite(GND1, 1);
  digitalWrite(GND2, 1);
  digitalWrite(GND3, 1);
  delay (1);  
}





void digit20 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 0);  
}
void digit21 () {  
  digitalWrite(seg2A, 0);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 0);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 0);  
}
void digit22 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 0);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 1);  
}
void digit23 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 1);  
}
void digit24 () {  
  digitalWrite(seg2A, 0);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 0);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 1);  
}
void digit25 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 0);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 1);  
}
void digit26 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 0);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 1);  
}
void digit27 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 0);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 0);  
}
void digit28 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 1);  
}
void digit29 () {  
  digitalWrite(seg2A, 1);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 0);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 1);  
}
void l () {  
  digitalWrite(seg2A, 0);  
  digitalWrite(seg2B, 0);  
  digitalWrite(seg2C, 0);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 1);  
  digitalWrite(seg2G, 0);
  for (int i = 0; i < 40; i++)
 {digitalWrite(GND4, 0);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);}
  for (int i = 0; i < 1; i++)
 {digitalWrite(GND4, 1);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);}  
}
void o () {  
  digitalWrite(seg2A, 0);  
  digitalWrite(seg2B, 0);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 1);
  for (int i = 0; i < 40; i++)
 {digitalWrite(GND4, 1); 
  digitalWrite(GND5, 0);
  digitalWrite(GND6, 1);}
  for (int i = 0; i < 1; i++)
 {digitalWrite(GND4, 1);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);}
}
void d () {  
  digitalWrite(seg2A, 0);  
  digitalWrite(seg2B, 1);  
  digitalWrite(seg2C, 1);  
  digitalWrite(seg2D, 1);  
  digitalWrite(seg2E, 1);  
  digitalWrite(seg2F, 0);  
  digitalWrite(seg2G, 1);
  for (int i = 0; i < 40; i++)
 {digitalWrite(GND4, 1);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 0);}
  for (int i = 0; i < 1; i++)
 {digitalWrite(GND4, 1);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);}
}
void showdigit2 (int digit2)  
{  
  switch (digit2) {  
  case 0:  
   digit20 ();  
   break;  
  case 1:  
   digit21 ();  
   break;  
  case 2:  
   digit22 ();  
   break;  
  case 3:  
   digit23 ();  
   break;  
  case 4:  
   digit24 ();  
   break;  
  case 5:  
   digit25 ();  
   break;  
  case 6:  
   digit26 ();  
   break;  
  case 7:  
   digit27 ();  
   break;  
  case 8:  
   digit28 ();  
   break;  
  case 9:  
   digit29 ();  
   break;
   default:  
   break;  
  } 
}

void showdigits2 (int number2)  
{  
  showdigit2(number2/100);
  digitalWrite(GND4, 0); 
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);
  delay (2);
  digitalWrite(GND4, 1); 
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);
  delay (1);  
  number2 = number2%100;
  digitalWrite(GND4, 1);
  showdigit2(number2/10);
  digitalWrite(GND5, 0);
  delay (2);
  digitalWrite(GND4, 1); 
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);
  delay (1);  
  number2 =number2%10;    
  digitalWrite(GND5, 1);  
  showdigit2(number2/1);  
  digitalWrite(GND6, 0);
  delay (2);  
  digitalWrite(GND4, 1); 
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);
  delay (1); 
  
}
void setup()  
{ Serial.begin(9600); 
  pinMode(seg1A, OUTPUT);  
  pinMode(seg1B, OUTPUT);  
  pinMode(seg1C, OUTPUT);  
  pinMode(seg1D, OUTPUT);  
  pinMode(seg1E, OUTPUT);  
  pinMode(seg1F, OUTPUT);  
  pinMode(seg1G, OUTPUT);  
  pinMode(GND1,  OUTPUT);  
  pinMode(GND2,  OUTPUT);  
  pinMode(GND3,  OUTPUT);
  pinMode(seg2A, OUTPUT);  
  pinMode(seg2B, OUTPUT);  
  pinMode(seg2C, OUTPUT);  
  pinMode(seg2D, OUTPUT);  
  pinMode(seg2E, OUTPUT);  
  pinMode(seg2F, OUTPUT);  
  pinMode(seg2G, OUTPUT);  
  pinMode(GND4,  OUTPUT);  
  pinMode(GND5,  OUTPUT);  
  pinMode(GND6,  OUTPUT);
  pinMode(ledPin,  OUTPUT);
  pinMode(fan,  OUTPUT);
  digitalWrite(GND4, 1);
  digitalWrite(GND5, 1);
  digitalWrite(GND6, 1);
  digitalWrite(fan, 0);
  for (int i = 0; i < 1690; i++)
  {a();c();l();o();d();led();}
  
} 
void loop ()  
{ vout1 = analogRead(A7);
  value1=((((vout1*2)+1)*500)+1024)/2048;
  vout2= analogRead(A6);
  value2=((((vout2*2)+1)*500)+1024)/2048;
  for (int i = 0; i < 20; i++)
  {
  showdigits1(value1);
  showdigits2(value2);
  }
  digitalWrite(fan, 1);
  digitalWrite(ledPin, 0); 
}
void led()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
  previousMillis = currentMillis;
  if (ledState == LOW) {
  ledState = HIGH;} 
  else 
  {ledState = LOW;}
  digitalWrite(ledPin, ledState);
  } 
}
