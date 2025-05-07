// C++ code para Arduino
// Variáveis globais
String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  // Solicita os dados
  Serial.println("Digite os dados do funcionario:");

  // Nome
  Serial.println("Nome: ");
  while (!Serial.available()) {}
  nome = Serial.readStringUntil('\n');
  nome.trim(); // Remove espaços extras

  // Cargo
  Serial.println("Cargo: ");
  while (!Serial.available()) {}
  cargo = Serial.readStringUntil('\n');
  cargo.trim();

  // Salario
  Serial.println("Salario: ");
  while (!Serial.available()) {}
  salario = Serial.parseFloat();

  // Processamento do aumento
  if (salario < 500) {
    novoSalario = salario * 1.30;
    
    Serial.println("Funcionario: " + nome);
    Serial.println("Cargo: " + cargo);
    Serial.print("Salario reajustado: R$ ");
    Serial.println(novoSalario, 2);
  } else {
    Serial.println("Funcionario: " + nome);
    Serial.println("Cargo: " + cargo);
    Serial.print("Salario: R$ ");
    Serial.println(salario, 2);
    Serial.println("Nao tem direito a aumento.");
  }

  Serial.println("-----------------------------");
  delay(3000); // Aguarda antes de permitir novo input
}
