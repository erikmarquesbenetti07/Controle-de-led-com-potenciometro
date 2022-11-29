//LEONARDO AMADOR RA: 215785
//ERIK MARQUES BENETTI RA: 215814

// COLOCAR O LINK DO DRIVE AQUI

https://drive.google.com/drive/folders/1Z7o9G8sqn7KwuKW6sa6OtUhcoGi4fpE1?usp=sharing




int led  = D2; // Definindo que o LED Vermelho 1 está na porta digital 2
int led2 = D3; // Definindo que o LED Vermelho 2 está na porta digital 3
int led3 = D4; // Definindo que o LED Amarelo 1 está na porta digital 4
int led4 = D5; // Definindo que o LED Amarelo 2 está na porta digital 5
int led5 = D6; // Definindo que o LED Verde 1 está na porta digital 6
int led6 = D7; // Definindo que o LED Verde 2 está na porta digital 7

int pot = A0; // Definindo que o Potenciômetro está na porta analógica A0

int valorpot = 0; // Variável que armazena o valor da leitura do potenciômetro

void setup(){ // Inicia o void setup

  // Definindo os LEDs como Saídas 
  
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(pot, INPUT);

  Serial.begin(115200);
 
  // Defininindo o Potenciômetro como Entrada

  pinMode(pot, INPUT);
}

void loop(){ // incia o void loop
 
valorpot = analogRead(pot); // Faz a leitura analógica da porta em que o potenciômetro esta conectado
  Serial.println(valorpot);
valorpot = map(valorpot,0,1023,0,255); // transformando uma escala de 0-1023 em uma escala 0 a 255

  // Vamos dividir 255 pela quantidade de LEDs que temos, ou seja 6.
  
  if (valorpot >= 42.5){ // Se o valor do potenciômetro for maior ou igual a 42.5
    digitalWrite(led, HIGH); // O primeiro LED se acende 
  }else{ 
    digitalWrite(led, LOW); // O primeiro LED permance apagado
  }if (valorpot >= 85){ // Se o valor do potenciômetro for maior ou igual a 85
    digitalWrite(led2, HIGH); // O primeiro LED se acende 
  }else{ 
    digitalWrite(led2, LOW); // O segundo LED permanece apagado
  }if (valorpot >= 127.5 ){ // Se o valor do potenciômetro for maior ou igual a 127.5
    digitalWrite(led3, HIGH); // O terceiro LED se acende 
  }else{ 
      digitalWrite(led3, LOW); // O terceiro LED permanece apagado
  }if (valorpot >= 170){ // Se o valor do potenciômetro for maior ou igual a 170
    digitalWrite(led4, HIGH); // O quarto LED se acende 
  }else{
    digitalWrite(led4, LOW); // O quarto LED permenece apagado
  }if (valorpot >= 212.5){ // Se o valor do potenciômetro for maior ou igual a 212.5
    digitalWrite(led5, HIGH); // O quinto LED se acende 
  }else{
    digitalWrite(led5, LOW); // O quinto LED permanece apagado
  }if (valorpot >= 255){ // Se o valor do potenciômetro for maior ou igual a 255
    digitalWrite(led6, HIGH); // O sexto LED se acende
  }else{
    digitalWrite(led6, LOW); // O sexto LED permanece apagado
  }
}
