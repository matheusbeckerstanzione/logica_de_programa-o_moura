void setup() {
  Serial.begin(9600);
}

void loop() {
  int nota1, nota2, frequencia;

  Serial.println("Digite sua primeira nota: ");
  while (!Serial.available());
  nota1 = Serial.parseInt(); 
  Serial.println("Digite sua segunda nota: ");
  while (!Serial.available());
  nota2 = Serial.parseInt(); 
  Serial.println("Digite sua frequencia: ");
  while (!Serial.available());
  frequencia = Serial.parseInt(); 
  while (Serial.available()) {
    Serial.read();  
  }

 
  float media = (nota1 + nota2) / 2.0;

  
  if (media == 10 && frequencia == 100) {
    Serial.println("Parabéns! Nota máxima!");
  } else if (media >= 6 && frequencia >= 75) {
    Serial.println("Aprovado!");
  } else if (media < 6 && frequencia < 75) {
    Serial.println("Reprovado por frequencia e média da nota.");
  } else if (media < 6) {
    Serial.println("Reprovado por nota.");
  } else if (frequencia < 75) {
    Serial.println("Reprovado por frequência.");
  }

  delay(1000); 
}

