// C++ code
//
const int pinMerah = 3;
const int pinKuning = 4;
const int pinHijau = 5;

void setup()
{
  Serial.begin(9600); //menampilkan serial monitor
  pinMode(pinMerah,OUTPUT);
  pinMode(pinKuning,OUTPUT);
  pinMode(pinHijau,OUTPUT);
  
}

void loop()
{
  for(int x=1; x<=3; x++){
        digitalWrite(pinMerah, HIGH);
        delay(300);
        Serial.println("MERAH");
        digitalWrite(pinMerah, LOW);
        delay(300);
    }

    for(int x=1; x<=3; x++){
        digitalWrite(pinKuning, HIGH);
        delay(300);
        Serial.println("KUNING");
        digitalWrite(pinKuning, LOW);
        delay(300);
    }

    for(int x=1; x<=3; x++){
        digitalWrite(pinHijau, HIGH);
        delay(300);
        Serial.println("HIJAU");
        digitalWrite(pinHijau, LOW);
        delay(300);
    }

    for(int x=1; x<=1; x++){
        digitalWrite(pinMerah, HIGH);
        delay(300);
        Serial.println("MERAH ON");
        digitalWrite(pinKuning, HIGH);
        delay(300);
        Serial.println("KUNING ON");
        digitalWrite(pinHijau, HIGH);
        delay(300);
        Serial.println("HIJAU ON");
        
        digitalWrite(pinHijau, LOW);
        delay(300);
        Serial.println("HIJAU OFF");
        digitalWrite(pinKuning, LOW);
        delay(300);
        Serial.println("KUNING OFF");
        digitalWrite(pinMerah, LOW);
        delay(300);
        Serial.println("MERAH OFF");
    }

}
