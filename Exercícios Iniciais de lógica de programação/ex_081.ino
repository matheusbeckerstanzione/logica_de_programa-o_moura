// C++ code
//Variavel
int idade = 0;

void setup()
{
 Serial.begin (9600);
}

void loop()
{
  Serial.println("Digite sua idade:");
   while (!Serial.available());
  idade = Serial.parseInt();
  
  Serial.println("idade: " + String(idade));
  
  if(idade >=16){
    Serial.println("Voto obrigatorio");
  
  } else {
    Serial.println("Sem idade paea votar");
  }
  delay (2000);
}