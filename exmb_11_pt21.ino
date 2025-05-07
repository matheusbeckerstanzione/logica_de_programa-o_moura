// C++/Arduino code
// Verifica se um número é positivo ou negativo

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int numero;

  // Solicitar entrada
  Serial.println("Digite um numero inteiro: ");

  // Espera até o usuário digitar algo
  while (!Serial.available()) {}

  // Lê o número digitado
  numero = Serial.parseInt();

  // Verifica se é positivo, negativo ou zero
  if (numero > 0) {
    Serial.println("O numero e positivo.");
  } else if (numero < 0) {
    Serial.println("O numero e negativo.");
  } else {
    Serial.println("O numero e zero.");
  }

  delay(2000); // Aguarda um pouco antes de permitir nova entrada
}