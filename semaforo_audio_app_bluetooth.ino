int ledGreen = 5;
int ledYellow = 6;
int ledRed = 7;
int estado = 0;
void setup() {
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  Serial.begin(9600);
}

void on(int led){
  for(int i = 5; i<=7; i++){
    if(i == led){
      digitalWrite(i, HIGH);
      }else{
        digitalWrite(i, LOW);
        }
    }
}
void loop() {

      if(Serial.available() > 0){
             estado = Serial.read();
        } 
       if (estado == 'E') {
               on(5);
               delay(200);
               on(6);
               delay(100);
               on(7);
               delay(200);
               on(6);
               delay(100);
             
             
       }
       if (estado == 'A')
       {
               on(9);
              
       }
}
