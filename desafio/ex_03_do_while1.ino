/*
While - É uma estrutura de repetição que só executa quando a 
condição for verdadeira.

for - É estrutura de repetição com inicialização, condicao e incremento definidos. Assim como while
só executa se a condicao for verdadeira
*/

/*
a função SETUP() tem o objetivo de inicialiar o programa. Podemos chamar
de configuração
*/

void setup()
{
Serial.begin(9600);
  
 /*
 
 
 */
  
 //váriavel inicializadora
  
  int contadorwhile = 0; 
  
  while(contadorwhile <= 50){
    Serial.println(contadorwhile);
    contadorwhile+= 1;
  }
  
 
  
  for(int contador = 1; contador <=5; contador++){
  Serial.println(contador);
    
    delay(500);
  }
  
}


// a função LOOP() tem o objetivo de repetir várias vezes o programa
void loop()
{
    // sem estruções
}