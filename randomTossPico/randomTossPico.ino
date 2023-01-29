long randNumber;
int Heads;
int qty = 20000;
  float counterheads;
  float countertails;
float res;

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(A0));
}

void loop() {
  int array[qty];
  for (int i = 0; i < qty; i++) {
    randNumber = random(2);
    array[i] = randNumber;
  }
  Heads = 0;
  for (int y = 0; y < qty; y++) {
    if(array[y]/1 == 1){
      Heads++;
    }

  }
  //Serial.println(Heads);
  int tails;
  tails = qty - Heads;
  Serial.print("Tails: ");
  Serial.print(tails);
  Serial.print("\t");
  Serial.print("Heads");
  Serial.print(Heads);

  if(tails<=Heads){
    counterheads++;
  }else{
    countertails++;
  }
  Serial.print("\t");
  Serial.print("Counter Heads: ");
  Serial.print(counterheads);
  Serial.print("\t");
  Serial.print("Counter Tails: ");
  Serial.print(countertails);
  double result = (counterheads/countertails);
  Serial.print("\t");
  Serial.println(result);


}
