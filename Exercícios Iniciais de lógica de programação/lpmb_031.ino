// C++ code
// Faça um programa que receba um número e exiba o seu dobro.

// Declaração de variáveis
float numero = 0;
float dobro = 0;

void setup()
{
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop()
{
  // Entrada
  Serial.println("Digite um numero:");
  while (!Serial.available()); // Espera até o usuário digitar algo
  numero = Serial.parseFloat(); // Lê o número digitado

  // Processamento
  dobro = numero * 2;

  // Saída
  Serial.println("O dobro de " + String(numero) + " e " + String(dobro));
  delay(2000); // Aguarda um pouco antes de repetir
}