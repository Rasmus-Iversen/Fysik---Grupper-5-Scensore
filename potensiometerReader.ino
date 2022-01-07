/*Dette er begyndelsen på pogrammet der skal
aflæse spændingsdelingen på et potensiometer*/

  const float analogPin=3;  //Definireing af input pin

  float analogInt=0; //Seneste værdi for anolog input = 0
  float uUd=0;//Definering uUd som variabel


 void setup() {
  Serial.begin(9600); //Begynder Seriel Kommunikation på 9600 bit rate (bit/s)
 }

 void loop(){
  analogInt=analogRead(analogPin); //Læs værdi og skriv til variabel anologInt

  uUd=analogInt/204.6; // 

  Serial.print(uUd); //Printer værdi af varibel anologInt
  Serial.println("V");

  delay(2000);
 }
