
String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0; 

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  
}

void loop() {
  // Variáveis
  String nome, cargo;
  float salario, salario_ajustado;
  
  // Solicitar dados via Serial
  Serial.println("Digite os dados do funcionario:");
  
  Serial.println("Nome ");
  while(!Serial.available()) {} // Aguarda entrada
  nome = Serial.readStringUntil('\n');
  
  Serial.println("Cargo ");
  while(!Serial.available()) {}
  cargo = Serial.readStringUntil('\n');
  
  Serial.println("Salario ");
  while(!Serial.available()) {}
  salario = Serial.parseFloat();
 
  
  // Processamento
  if(salario < 1000) {
    salario = salario + (salario * 0.10); // Aumento de 10%
  }
  
  // Exibir resultados
  Serial.println("Funcionario " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.println("Salario: " + String(salario)); 
  delay(1000);
}