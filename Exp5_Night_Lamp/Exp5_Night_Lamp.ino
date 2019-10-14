int sensorValue = 0;
double voltage;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  sensorValue = analogRead(A0);

  voltage = (double)(sensorValue * sensorValue * (5/1024));
  Serial.println(voltage);

if(sensorValue > 300)
{
  digitalWrite(13,HIGH);
}
else digitalWrite(13,LOW);

}
