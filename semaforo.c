#define Pin_Vermelho 13
#define Pin_Amarelo 12
#define Pin_Verde 11

void setup (){
  pinMode (Pin_Vermelho, OUTPUT);
  pinMode (Pin_Amarelo, OUTPUT);
  pinMode (Pin_Verde, OUTPUT);
}
    
void loop (){
  digitalWrite (Pin_Vermelho, HIGH);
  delay (1000);
  digitalWrite (Pin_Vermelho, LOW);
  delay (1000);
  digitalWrite (Pin_Amarelo, HIGH);
  delay(1000);
  digitalWrite (Pin_Amarelo, LOW);
  delay (1000);
  digitalWrite (Pin_Verde, HIGH);
  delay (1000);
  digitalWrite (Pin_Verde, LOW);
  delay (1000);
}