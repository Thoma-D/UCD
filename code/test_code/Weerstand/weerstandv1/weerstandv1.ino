int R1= A0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R1, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  float waarde1=analogRead(R1);
  float waarde2=waarde1*(3,3/1023);
  Serial.println(waarde1);

  delay(500);


}
