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
  Serial.println(nomes[2]);
  
  nomes[2] = "Diogo";
  
  Serial.println(nomes[2]);
  
  
  
  int idades[5];// cria um vetor tamanho 5 (0-4)
  
  idades[0] = 50;
  idades [1] = 55;
  idades [2] = 5;
  idades [3] = 15;
  idades [4] = 12;
  
  Serial.println(idades[0]);
  delay(1000);
  Serial.println(idades[1]);
  delay(1000);
  Serial.println(idades[2]);
  delay(1000);
  Serial.println(idades[3]);
  delay(1000);
  Serial.println(idades[4]);
  delay(1000);

  
  delay(3000);
}