// C++ code (Arduino)
// Faça um programa que receba o nome, o peso e a altura de uma pessoa.
// Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura)

String nome = "Digite  seu nome";

float centimetros = 0;
float polegadas = 0;

void setup() {
  Serial.begin(9600); // Inicia comunicação serial
}

void loop() {
// Entrada
  Serial.println("Digite uma medida em centimetros:");
  while (!Serial.available());
  centimetros = Serial.parseFloat();

   // Processamento
  polegadas = centimetros / 2.54;
  
  // Saída
  Serial.println(String(centimetros) + " centimetros equivalem a " + String(polegadas, 2) + " polegadas.");
  delay(3000); // Aguarda antes de repetir
}