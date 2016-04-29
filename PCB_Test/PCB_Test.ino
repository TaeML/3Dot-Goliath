int sum = 0;
int sample_count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  /*
  while (sample_count < 10) 
  {
    sum += analogRead(A5);
    sample_count++;
    delay(500);
  }*/
  int sensorValue = digitalRead(2);
  // put your main code here, to run repeatedly:
  float voltage = sensorValue;
  Serial.println(voltage);
  //Serial.println(sensorValue);
  delay(1000);
}
