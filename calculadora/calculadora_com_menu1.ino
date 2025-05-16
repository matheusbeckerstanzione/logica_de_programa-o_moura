int escolhaDaOperacao;
float resultado;

void somar(float numero1 , float numero2){

  resultado = numero1 + numero2;

  
  Serial.println("Resultado: " + String(resultado) );
  
  //return resultado;

}

void subtrair(float numero1 , float numero2){

  resultado = numero1 - numero2;


  Serial.println("Resultado: " + String(resultado) );
 
  //return resultado;

}

void divisao(float numero1 , float numero2){

  resultado = numero1 / numero2;

  
  Serial.println("Resultado: " + String(resultado) );
 
  //return resultado;

}

void multiplicacao(float numero1 , float numero2){

  resultado = numero1 * numero2;

  
  Serial.println("Resultado: " + String(resultado) );
 
  //return resultado;

}

void setup()
{
  Serial.begin(9600);

  int contador = 0;
  float numero1;
  float numero2;


  do{ 
    Serial.println("Seja muito bem vindo a nossa calculadora inteligente: P!!!\n");
   Serial.println("Escolha uma das operacoes para segir em frente");
    Serial.println("1 - Somar");
    Serial.println("2 - Subtrair");
    Serial.println("3 - Dividir");
    Serial.println("4 - Multiplicar");
    while(! Serial.available()){}
    escolhaDaOperacao = Serial.parseInt ();


   
    Serial.println("Para conseguimos avancar a operacao matematica, precisamos que vc digite 2 numeros");
    Serial.println("digite o primeiro numero");
    while(! Serial.available()){}
    numero1 = Serial.parseFloat ();

    
    Serial.println("digite o segundo numero");
    while(! Serial.available()){}
    numero2 = Serial.parseFloat ();


    switch(escolhaDaOperacao){

      case 1:

      somar(numero1 , numero2 ); //estou passando os valores via parametro
      Serial.println("Operacao escolhida foi somar");

      break;
      case 2:
      
      Serial.println("Operacao escolhida foi subtrair");
      subtrair(numero1 , numero2);

      break;
      case 3:   
      Serial.println("Operacao escolhida foi dividir");    
      divisao(numero1 , numero2);

      break;
      case 4:
      
      Serial.println("Operacao escolhida foi multiplicar"); 
      multiplicacao(numero1 , numero2);


      break;
      default:
   
      Serial.println("Ops opcao invalida! Escolha uma opcao do 1 ao 4.");


    }
    
    Serial.println("Voce deseja voltar ao menu? digite sim ou nao (em minusculo, por gentileza)");
    
    while(! Serial.available()){}


    if( Serial.readString() == "sim"){
      contador = 1;
    }
    else{
      contador = 0;
        
      Serial.println("Ate breve");
      Serial.println("caso queira voltar,reinicie o programa");
     
    }


  }
  while( contador != 0 ); //se o contador for diferente de 0, o mesmo repete
}

void loop()
{
  //sem funcoes
}