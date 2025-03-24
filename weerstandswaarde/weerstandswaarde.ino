int R1 = A0;
int R2 = A1;
int R3 = A2;
int R4 = A3;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R1, INPUT_PULLUP);
  pinMode(R2, INPUT_PULLUP);
  pinMode(R3, INPUT_PULLUP);
  pinMode(R4, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  float waarde1 = analogRead(R1);
  float waarde2 = analogRead(R2);
  float waarde3 = analogRead(R3);
  float waarde4 = analogRead(R4);
  Serial.print("Blok 1: ");
  Serial.print(waarde1);
  Serial.print("  ;  Blok 2: ");
  Serial.print(waarde2);
  Serial.print("  ;  Blok 3: ");
  Serial.print(waarde3);
  Serial.print("  ;  Blok 4: ");
  Serial.println(waarde4);  
  delay(500);
}