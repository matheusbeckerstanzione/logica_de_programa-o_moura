// C++ code
//

String nomes[7]; 
String emails[7]; 
int idades[7]; 
void setup()
{
  Serial.begin(9600);

  Serial.println("***********************************");
  Serial.println("*** PROGRAMA CADASTRO DE CONVIDADOS ***");
  Serial.println("***********************************");
  Serial.println();
}

void loop()
{
  // Cadastro dos convidados
  for (int i = 0; i < 7; i++) {
    Serial.println("Digite o nome do convidado:");
    while (!Serial.available());
    nomes[i] = Serial.readString();
   

    Serial.println("Digite o email do convidado:");
    while (!Serial.available());
    emails[i] = Serial.readString();
    

    Serial.println("Digite a idade do convidado:");
    while (!Serial.available());
    idades[i] = Serial.parseInt();
   
  }

  // Exibir todos os convidados cadastrados
  Serial.println();
  Serial.println("***********************************");
  Serial.println("*** LISTAGEM DOS CONVIDADOS ***");
  Serial.println("***********************************");

  for (int i = 0; i < 7; i++) {
    Serial.println("Convidado #" + String(i + 1));
    Serial.println("Nome: " + nomes[i]);
    Serial.println("Email: " + emails[i]);
    Serial.println("Idade: " + String(idades[i]));
 	Serial.println("Todos os convidados foram cadastrados com sucesso!");
    
    
    delay(1000); // só para espaçar a leitura no monitor serial
  }
}
  
