const int ledPin = 8, ldrPin = A5;
int state = 2;
int lastState = state;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void verify(){
  if(state == 1){
    digitalWrite(ledPin, HIGH);
    if(lastState != state){
      Serial.println("on");
    }
  }else if(state == 0){
    digitalWrite(ledPin, LOW);
    if(lastState != state){
      Serial.println("off");
    }
  }
}

void loop(){
  int val = analogRead(ldrPin);
  
  if(val >= 600){
    state = 1;
  }else{
    state = 0;
  }

  verify();

  lastState = state;
}
