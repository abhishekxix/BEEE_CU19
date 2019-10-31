
int t;
float d;

void setup() {
  pinMode(0,INPUT);
  pinMode(1,OUTPUT);
  Serial.begin(9600);

}

void loop() {

  digitalWrite(1,HIGH);
   delayMicroseconds(10);
  digitalWrite(1,LOW);
   t = pulseIn(0,HIGH);
   d = (float)(t * 0.034);
   Serial.println(d); 
}
