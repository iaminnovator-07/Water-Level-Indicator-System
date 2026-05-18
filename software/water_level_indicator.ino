int sensorPin = A0;

int led1 = 2;
int led2 = 3;
int led3 = 4;

void setup() {

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600);

}

void loop() {

  int waterLevel = analogRead(sensorPin);

  Serial.println(waterLevel);

  if (waterLevel > 200) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  if (waterLevel > 400) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  if (waterLevel > 600) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }

  delay(100);
}
