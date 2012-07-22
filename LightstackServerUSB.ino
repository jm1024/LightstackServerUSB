/////////////////////////////////
// io defs
#define LED_GREEN 5
#define LED_RED 3 //should be 3
#define LED_13 13

/////////////////////////////////
//setup
void setup() 
{ 
  //setup I/O pins
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_13, OUTPUT);
  
  //start serial communications for debugging output
  Serial.begin(9600);
}

/////////////////////////////////
//main loop
void loop() 
{
  
  //check for serial input
  int incomingByte = 0;
  if (Serial.available() > 0) 
  {
    char ch = Serial.read();
    
    if(ch == 'c')
    {
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_13, LOW);
    }
    
    if(ch == 'r')
    {
      digitalWrite(LED_RED, HIGH);
      digitalWrite(LED_GREEN, LOW);
      digitalWrite(LED_13, HIGH);
    }
    
    if(ch == 'g')
    {
      digitalWrite(LED_GREEN, HIGH);
      digitalWrite(LED_RED, LOW);
      digitalWrite(LED_13, HIGH);
    }

  }
  
  delay(5);
}

