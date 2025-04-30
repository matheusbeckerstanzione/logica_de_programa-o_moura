// C++ code
//Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:

//Declaração de Variaveis
float idade = 0;
float idadeSemana = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  //Entrada
   Serial.println("Digite sua idade em anos");
   while(! Serial.available() );
   idade = Serial.parseInt();
  
  //Processamento
   idadeSemana = idade * 52;
  
    //saida
  Serial.println("idade em semanas: " + String(idadeSemana) );
  delay (1000);
}