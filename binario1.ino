#define BAD 13  
#define BUNNY 12  
#define UN 11  
#define VERANO 10  
#define SINTI 9   

void setup() {
  pinMode(BAD, OUTPUT);
  pinMode(BUNNY, OUTPUT);
  pinMode(UN , OUTPUT);
  pinMode(VERANO, OUTPUT);
  pinMode(SINTI, OUTPUT);
}

void loop() {

  for (int numero = 0; numero <= 20; numero++) {

    digitalWrite(BAD, (numero >> 0) & 1);
    digitalWrite(BUNNY, (numero >> 1) & 1);
    digitalWrite(UN, (numero >> 2) & 1);
    digitalWrite(VERANO, (numero >> 3) & 1);
    digitalWrite(SINTI, (numero >> 4) & 1);

    delay(1000);
  }

}