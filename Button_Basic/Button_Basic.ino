// C++ code
//

const int ledMerah = 2;
const int ledKuning = 3;
const int ledHijau = 4;

const int buttonMerah= 8;
const int buttonKuning= 9;
const int buttonHijau= 10;

int stateMerah = 0;
int stateKuning = 0;
int stateHijau = 0;

void setup()
{
  Serial.begin(9600); //menampilkan serial monitor
  pinMode(ledMerah, OUTPUT);
  pinMode(ledKuning, OUTPUT);
  pinMode(ledHijau, OUTPUT);
  
  pinMode(buttonMerah, INPUT);
  pinMode(buttonKuning, INPUT);
  pinMode(buttonHijau, INPUT);
}

void loop()
{
  stateMerah = digitalRead(buttonMerah);
  stateKuning = digitalRead(buttonKuning);
  stateHijau = digitalRead(buttonHijau);
  
  if (stateMerah == HIGH) {
    digitalWrite(ledMerah, HIGH);
    Serial.println("Merah");
  } else {
    digitalWrite(ledMerah, LOW);
  }
  
  if (stateKuning == HIGH) {
    digitalWrite(ledKuning, HIGH);
    Serial.println("Kuning");
  } else {
    digitalWrite(ledKuning, LOW);
  }
  
  if (stateHijau == HIGH) {
    digitalWrite(ledHijau, HIGH);
    Serial.println("Hijau");
  } else {
    digitalWrite(ledHijau, LOW);
  }
  
  delay(100);
 
}
