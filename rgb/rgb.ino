int pinoR = 11; 
int pinoG = 10; 
int pinoB = 9; 

#define COMMON_ANODE 
 
void setup(){
  delay(5000);
  pinMode(pinoR, OUTPUT);
  pinMode(pinoG, OUTPUT); 
  pinMode(pinoB, OUTPUT); 
}
 
void loop(){
  setColor(150, 200, 0); //PARÂMETROS PARA PRODUZIR A COR VERMELHA
}


void setColor(int vermelho, int verde, int azul){
  
  #ifdef COMMON_ANODE //SE O LED RGB FOR DEFINIDO COMO ANODO COMUM, FAZ
    vermelho = 255 - vermelho; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (vermelho) INFORMADO' NA CHAMADA DA FUNÇÃO
    verde = 255 - verde; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (verde) INFORMADO' NA CHAMADA DA FUNÇÃO
    azul = 255 - azul; //VARIÁVEL RECEBE O RESULTADO DA OPERAÇÃO '255 MENOS O PARÂMETRO (azul) INFORMADO' NA CHAMADA DA FUNÇÃO
  #endif
  analogWrite(pinoR, vermelho); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'vermelho'
  analogWrite(pinoG, verde); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'verde'
  analogWrite(pinoB, azul); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'azul'
}
