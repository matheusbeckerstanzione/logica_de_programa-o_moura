
  
void setup() {
  Serial.begin(9600);

  int resposta;
  char opcao;

  do {
    Serial.println("Quanto e 2 + 2?");
    while (Serial.available() == 0) {}
    resposta = Serial.parseInt();

    if (resposta == 4) {
      Serial.println("Parabens!");
      break;
    } else {
      Serial.println("Tente novamente!");
      Serial.println("Deseja tentar de novo? (s/n)");
      
      while (Serial.available() == 0) {}
      opcao = Serial.read();
    }


  } while (opcao == 's' || opcao == 'S');
}

void loop() {
 
}
