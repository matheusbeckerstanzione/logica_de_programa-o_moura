// C++ code
/*
While - É uma estrutura de repetição que só executa quando 
a condição for verdadeiro

*/
//A função SETUP() tem como objetivo de inicializar o programa.
//podemos chamar de configuração 
void setup()
{
	 Serial.begin(9600);
  
  /*Tipos de dados (principais )
  - INT (numeros inteiros)
  - LONG (numeros inteiros - é um int com maior capacidade de armazenamento)
  - STRING (caracteres: alfanumericos e especiais)
  - FLOAT (numeros com casa decimais)
  - BOOL (true e false)
  */
  // Variavel inicializadora
    int contador = 60;

  while (contador <= 101) {
    if (contador <= 78) {
      Serial.println(contador);
      contador += 2;
    } else {
      Serial.println(contador);
      contador += 3;
    }

    delay(500);
  }
}
//A função LOOP() tem como objetivo de repitir vairias vezes o programa
void loop()
{
  //sem instrução
}
