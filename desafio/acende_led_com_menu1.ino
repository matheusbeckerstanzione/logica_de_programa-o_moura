// Definição dos pinos dos LEDs
const int ledVerde = 13;
const int ledAmarelo = 12;
const int ledVermelho = 4;

void setup() {
  // Inicialização dos pinos como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);

  // Inicializa a comunicação serial
  Serial.begin(9600);
}

void loop() {
  int opcao;

  do {
    // Exibe o menu
    Serial.println("\n--- MENU DE CONTROLE DOS LEDs ---");
    Serial.println("1) Ligar Led Verde");
    Serial.println("2) Desligar Led Verde");
    Serial.println("3) Ligar Led Amarelo");
    Serial.println("4) Desligar Led Amarelo");
    Serial.println("5) Ligar Led Vermelho");
    Serial.println("6) Desligar Led Vermelho");
    Serial.println("7) Ligar Todos os Leds");
    Serial.println("8) Desligar Todos os Leds");
    Serial.println("0) Sair");
    Serial.print("Escolha uma opcao: ");

    // Aguarda entrada do usuário
    while (Serial.available() == 0) {}

    opcao = Serial.parseInt();

    switch (opcao) {
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println("Led Verde ligado.");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println("Led Verde desligado.");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("Led Amarelo ligado.");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println("Led Amarelo desligado.");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Led Vermelho ligado.");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println("Led Vermelho desligado.");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Todos os LEDs ligados.");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println("Todos os LEDs desligados.");
        break;
      case 0:
        Serial.println("Saindo do menu...");
        break;
      default:
        Serial.println("Opção inválida. Tente novamente.");
    }

    delay(500); // Pequeno atraso para estabilidade

  } while (opcao != 0);
}
