const byte trigPin = 8;
const byte echoPin = 7;
const byte piezoPin = 5;

unsigned long distance;
float distanceFixPercent = 3.18;

unsigned long maxDistance = 200; // 200cm
unsigned long minDistance = 0; // 0cm

short freq;
const short minFreq = 200;
const short maxFreq = 1000;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(piezoPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Sensor inicializado.");
}

void pulseTrigger()
{
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}

void getDistance()
{
  pulseTrigger();
  distance = 0.034 * pulseIn(echoPin, HIGH) / 2.0;
  distance = distance + (distanceFixPercent / 100.0) * distance;
  
  Serial.print("Distancia: ");
  Serial.println(distance);
}

void loop()
{
  getDistance();
  
  if (distance < maxDistance)
  {
    digitalWrite(piezoPin, LOW);
    Serial.print("Frequencia: ");
    Serial.println(freq);
  }
  else
  {
    digitalWrite(piezoPin, HIGH);
  }
}
