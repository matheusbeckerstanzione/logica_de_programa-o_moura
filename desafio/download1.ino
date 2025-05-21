void setup() {
  Serial.begin(9600);
  int opcao;

  do {
    Serial.println("\n===== ROBO DE ATENDIMENTO =====");
    Serial.println("1 - Ver telefone");
    Serial.println("2 - Ver endereco");
    Serial.println("3 - Sair");
    Serial.println("Escolha uma opcao (1, 2 ou 3):");

    while (Serial.available() == 0) {} // Espera entrada
    opcao = Serial.parseInt();
    Serial.read(); // Limpa o buffer (\n)

    switch (opcao) {
      case 1:
        Serial.println("Telefone: 7070-7070");
        break;
      case 2:
        Serial.println("Endereco: Rua Niteroi 180 – Sao Caetano do Sul – SP");
        break;
      case 3:
        Serial.println("Encerrando atendimento...");
        break;
      default:
        Serial.println("Opcao invalida. Tente novamente.");
    }

  } while (opcao != 3);
}

void loop() {
  // Não precisa de código aqui
}
