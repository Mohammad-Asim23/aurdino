#define RED 13
#define YELLOW 12
#define GREEN 11

void setup() {

pinMode(RED,OUTPUT);
pinMode(YELLOW,OUTPUT);
pinMode(GREEN,OUTPUT);
}

void lightOn(int led, int duration)
{
  digitalWrite(RED,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(GREEN,LOW);

  digitalWrite(led,HIGH);
  delay(duration);

}
void loop() {
  lightOn(RED,5000);
  lightOn(YELLOW,2000);
  lightOn(GREEN,5000);
  
}
