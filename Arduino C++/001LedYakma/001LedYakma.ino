#define led 2 //Arduino led bağladığımız devre
#define blink 13 //Arduinoda bulunan L

void setup() {
  pinMode(led,OUTPUT);
  pinMode(blink,OUTPUT);

}

void loop() {

  //Ledlerin yanmasi icin kullanilan kodlar
  digitalWrite(led, HIGH);
  digitalWrite(blink, HIGH);
  delay(500);
  
  //ledlerin sonmesi icin kullanilan kodlar
  digitalWrite(led, LOW);
  digitalWrite(blink, LOW);
  delay(500);

}
