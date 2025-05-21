// C++ code
//
 

void setup()
{
  Serial.begin(9600);
  
}

void loop()
{//     indices        0       1       2        3
  //    tamanho 
  String nomes[4] = {"Matheus","Joao","Arthur","Alexia"};
  int idades[4];
  
  for(int i = 0; i < 4; i++){
  Serial.println("Digite sua idade de " + nomes[i]);
  while(!Serial.available());
    idades[i] = Serial.parseInt();
  }
  
  
  
  
  
// Exibir os dados do array  
  
  for(int i = 0; i < 4; i++)
  {// roda de 0 - 3
   
    Serial.println(String(i + 1) + "o Nome " + nomes[i]);
    Serial.println("idade: " + String(idades[i]) );
    Serial.println();//pular linha
    
    delay(2000);
    
  }
  
  
  
  
  
  
  delay(3000);
}//fim do loop