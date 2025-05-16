/*
While - É uma estrutura de repetição que só executa quando a 
condição for verdadeira.

For - É estrutura de repetição com inicialização, condição e incremento 
definidos. Assim como while, só executa se a condição for verdadeira
*/

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  
  Serial.println("Digite um numero e pressione ENTER:");
}

void loop() {
  if (Serial.available() > 0) {
    int n = Serial.parseInt(); // Lê o número digitado
    
    // Limpa o buffer serial
    while (Serial.available() > 0) {
      Serial.read();
    }
    
    Serial.print("Contagem de 0 ate ");
    Serial.println(n);
    
    // Versão com WHILE
    Serial.println("Vamos la ");
    int contadorWhile = 0;
    while (contadorWhile <= n) {
      Serial.println(contadorWhile);
      contadorWhile++;
      delay(500); // Atraso para visualização
    }
    
    // Versão com FOR
    Serial.println("Outra vez:");
    for (int contadorFor = 0; contadorFor <= n; contadorFor++) {
      Serial.println(contadorFor);
      delay(500); // Atraso para visualização
    }
    
    Serial.println("Digite um novo numero:");
  }
}