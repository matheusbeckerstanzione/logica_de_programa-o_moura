// C++ code
//
void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop()
{
Serial.println(" ");// pula linha
  Serial.println("---PROGRAMA JOGO DE DADOS---");
  Serial.println(" ");// pula linha
  Serial.println(" ");
  
  //pedir o palpite do usuario
 Serial.println("digite um palpite de 1 a 6");
  while(!Serial.available());
  int palpite = Serial.parseInt();
  
  //sortear o dado 
  int numeroSorteado = random(1, 7);// gera um numero aleatorio ate o 6
  //
  Serial.println("Seu palpite: " + String(palpite));
  Serial.println("Numero de dado: " + String(numeroSorteado));
  
  //se acertou dar os parabens, senao que pena
  if(palpite == numeroSorteado){
    Serial.println("Parabens, voce acertou ");
  }else{
  Serial.println("Que pena, tente outra vez ");
  }
  delay(2000);
}