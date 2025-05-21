void setup() {
  Serial.begin(9600);
  int senha;
  const int senhaCorreta = 1234;

  do {
    Serial.println("===== SISTEMA DE LOGIN =====");
    Serial.println("Digite a senha de 4 digitos:");

    while (Serial.available() == 0) {} // Espera o usuário digitar
    senha = Serial.parseInt();
    Serial.read(); // Limpa o buffer

    if (senha == senhaCorreta) {
      Serial.println("Login efetuado com sucesso!");
    } else {
      Serial.println("Senha incorreta. Tente novamente!");
    }

  } while (senha != senhaCorreta);
}

void loop() {
  // Nada aqui
}
