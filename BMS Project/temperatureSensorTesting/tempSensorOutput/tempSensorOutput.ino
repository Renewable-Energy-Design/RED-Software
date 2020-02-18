#define SENSORPIN A0
int sensorInput; 
float temp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorInput = analogRead(SENSORPIN);
  float percentageReading = (float) sensorInput / 1024;
  float voltage = percentageReading * 5; 
  float temp = ((voltage - 0.5) * 100); //offset of 0.5 and then multiply by 100 to convert to degrees
  Serial.print("Current Temperature: ");
  Serial.println(temp);
  
}
