int redPin=11;
int bluePin=10;
int greenPin=9;

const int sensorPin=A0;

int sensorValue=0;

int redValue=0;
int greenValue=0;
int blueValue=0;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int sensorVal=analogRead(sensorPin);

  Serial.print("Sensor Values: ");
  Serial.print(sensorValue);
  delay(500);
  redValue=sensorValue/4;
  greenValue=sensorValue/4;
  blueValue=sensorValue/4;

  analogWrite(redPin,redValue);
  analogWrite(greenPin,greenValue);
  analogWrite(bluePin,blueValue);
}

