// C++/Arduino code para cálculo de preço de venda com lucro

// Variáveis globais
float precoCompra = 0;
float percentualLucro = 0;
float precoVenda = 0;

void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  // Solicita o preço de compra
  Serial.println("Digite o preco de compra do produto:");
  while (!Serial.available()) {}
  precoCompra = Serial.parseFloat();
  Serial.read(); // Limpa o buffer após leitura do número

  delay(500);

  // Solicita o percentual de lucro
  Serial.println("Digite o percentual de lucro :");
  while (!Serial.available()) {}
  percentualLucro = Serial.parseFloat();
  Serial.read(); // Limpa o buffer após leitura do número

  delay(500);

  // Calcula o preço de venda
  precoVenda = precoCompra + (precoCompra * percentualLucro / 100.0);

  // Exibe o resultado
  Serial.println("Preco de venda do produto:  " + String(precoVenda, 2));

  // Verifica margem de lucro
  if (percentualLucro < 50.0) {
    Serial.println("Aviso: O produto sera vendido com uma margem muito pequena de lucro.");
  }

  Serial.println("---- FIM ----");
  
  // Aguarda antes de repetir
  delay(5000);
}