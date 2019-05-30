int VALOR;


void setup(){
  pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);   
}

void loop(){
  digitalWrite(3,HIGH);
  if(VALOR>=400){
    digitalWrite(3,LOW);
    tone(12,900,500);
    digitalWrite(2,HIGH);
    delay(300);
    digitalWrite(2,LOW);
    delay(300);
   
    }
    else{
      digitalWrite(12,LOW);
      digitalWrite(2,LOW);
      }
  
 VALOR = analogRead(A0);
  Serial.println(VALOR);  
  delay(500);     
}
