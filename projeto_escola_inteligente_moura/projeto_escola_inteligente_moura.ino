


//biblioteca
#include <DHT.h>
#include <DHT_U.h>
#include <DHT11.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

// indentacao (atalho) - Shift + Alt + F

//variaveis  - ascender led
const int pir = 2;
const int LedAmarelo = 13;

//variaveis verificar vazamento de gas
const int MQ135 = A0;
const int buzzer = 12;

#define DHTPINO A1
#define DHTTYPE DHT11

Servo motor;//variavel do tipo servo 

DHT dht(DHTPINO, DHT11);
LiquidCrystal_I2C lcd(0X27, 20, 4);

void ascenderLedAoDetectarPresenca() {
  int estadopir = digitalRead(pir);  //le o pino 2

  if ( estadopir == HIGH){
    digitalWrite(LedAmarelo, HIGH);
    Serial.println("Movimento detectado, ligando luzes.");
   } else {
     digitalWrite(LedAmarelo, LOW);
     Serial.println("Nenhum movimento detectado no momento.");

   }
}

void VerificarVazamentoDeGas(){
    int EstadoMQ135 = analogRead(MQ135);

    //Serial.println(EstadoMQ135);
    if (EstadoMQ135 >= 250){
     alarme_dois_tons();
    }
    else {
      noTone(buzzer); //para de tocar o alarme 
    }
}

void alarme_dois_tons() {

  int freqAlta = 2000;
  int freqBaixa = 800;
  int duracaoTom = 250;

  tone(buzzer, freqAlta, duracaoTom);
  delay(duracaoTom);
  tone(buzzer, freqBaixa, duracaoTom);
  delay(duracaoTom);
}

void vericarTemperaturaEUmidade(){

  float temperatura = dht.readTemperature();// Esse vai ler a temperatura 
  float umidade = dht.readHumidity();// Esse vai ler a umidade 

lcd.clear();//limpa o serial (lcd)
lcd.setCursor(0, 0);//primeira linha 
lcd.print("Temperatura: " + String(temperatura) + "C");
lcd.setCursor(0, 1);//segunda linha 
lcd.print("umidade: " + String (umidade) + "%");

//Serial.println("temperatura: " + String (temperatura) + "C");
//Serial.println("umidade: " + String (umidade) + "%");
delay(5000);
}

void abrirPortaComServo(){
  motor.write(180);
  delay(1500);

}

void fecharPortaComServo(){
  motor.write(0);
  delay(1500);
}
void setup() {
  Serial.begin(9600);
   dht.begin();//inicializando o dht
   lcd.init();//inicializando o lcd

   lcd.backlight();// liga a luz do lcd
  //fala ao programa que o pino 13 sera uma saida/entrada
  pinMode(LedAmarelo, OUTPUT);
  pinMode(pir, INPUT );
  pinMode(buzzer, OUTPUT );
  pinMode(MQ135, INPUT );
  motor.attach(3);

motor.write(0);


  Serial.println("Aguarde um tempo para os sensores serem calibrados.");
  delay(10000);
  Serial.println("Os sensores foram calibrados com sucesso.");

  lcd.setCursor(0, 0);//primeira linha
  lcd.print("Iniciando a leituras");
  lcd.setCursor(0, 1);//segunda linha pq conta o 0
  lcd.print("Obrigado meu amorzinho por esperar");
}

void loop() {
  //ascenderLedAoDetectarPresenca();
  VerificarVazamentoDeGas();
  vericarTemperaturaEUmidade();
  //alarme_dois_tons();
}
