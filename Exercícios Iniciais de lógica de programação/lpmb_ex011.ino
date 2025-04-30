// C++ code
//Faça um programa que receba a idade de uma pessoa em anos e imprima essa idade em: Meses, Dias, Horas, Minutos.

//Declaração de Variaveis
float idade = 0;
float idadeMeses = 0;
float idadeDias = 0;
float idadeHoras = 0;
float idadeMinutos = 0;

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
   idadeMeses = idade * 12;
   idadeDias = idade * 365;
   idadeHoras = idadeDias * 24;
   idadeMinutos = idadeHoras * 60;
  
  
 
  //saida
  Serial.println("idade em Meses: " + String(idadeMeses) );
  delay (1000);
  
  Serial.println("idade em Dias: " + String(idadeDias) );
  delay (1000);
  
Serial.println("idade em Horas: " + String(idadeHoras) );
  delay (1000);
  
  Serial.println("idade em Minutos: " + String(idadeMinutos) );
  delay (1000);
  
}