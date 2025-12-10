int led = 2;
int button = 8;

int degerOku;

void setup() {
  pinmode(led,OUTPUT);
  pinmode(button, INPUT);
}

void loop() {
  degerOku=digitalRead(button);

  if (degerOku == 1) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOW);
  }

  delay(150);

}
