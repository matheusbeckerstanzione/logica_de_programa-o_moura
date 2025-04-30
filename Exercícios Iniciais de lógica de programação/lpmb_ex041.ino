// C++ code (Arduino)
// Faça um programa que receba o nome, o peso e a altura de uma pessoa.
// Calcule e imprima o nome e o IMC dessa pessoa - IMC = peso / (altura * altura)

String nome = "Digite  seu nome";
float peso = 0;
float altura = 0;
float imc = 0;

void setup() {
  Serial.begin(9600); // Inicia comunicação serial
}

void loop() {
  // Entrada do nome
  Serial.println("Digite seu nome:");
  while (!Serial.available()); 
  nome = Serial.readStringUntil('\n');
  nome.trim(); // Remove espaços extras e quebras de linha

  // Entrada do peso
  Serial.println("Digite seu peso (em kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();

  // Entrada da altura
  Serial.println("Digite sua altura (em metros):");
  while (!Serial.available());
  altura = Serial.parseFloat();

  // Cálculo do IMC
  imc = peso / (altura * altura);

  // Saída
  Serial.println("Nome: " + nome);
  Serial.println("IMC: " + String(imc, 2)); // mostra com 2 casas decimais

  delay(5000); // Espera antes de repetir
}