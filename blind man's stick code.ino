//buzzer d13
//led d4, d5

#include <NewPing.h>

#define TRIGGER_PIN  7
#define ECHO_PIN     8 
#define MAX_DISTANCE 200 

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
int dist = sonar.ping_cm(); 
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);   
}

void loop() {
  dist = sonar.ping_cm(); 
  Serial.println(dist);
  if (dist>0 && dist <=15)
  {
    digitalWrite(13,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  else
  {
    digitalWrite(13,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
}
