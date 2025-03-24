int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

bool gedaanRA= false;
//functie getal naar naam
String intRStringR(int R){
  if (R<=150){
    return "RA";
  }
  if (R>200 && R<=450){
    return "RB";
  }
  if (R>450 && R<=800){
    return "RC";
  }
  if (R>800 && R<=960){
    return "RD";
  }
  else
    return "Geen weerstand";
}
//lijst met correcte volgorde
struct Data {
    int lezernummer;
    String R;
};

Data CorrecteVolgorde[] = {
    {1, "RD"},
    {2, "RB"},
    {3, "RC"},
    {4, "RA"}
};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lezerA, INPUT_PULLUP);
  pinMode(lezerB, INPUT_PULLUP);
  pinMode(lezerC, INPUT_PULLUP);
  pinMode(lezerD, INPUT_PULLUP);

  int oudRA = analogRead(lezerA);
  int oudRB = analogRead(lezerB);
  int oudRC = analogRead(lezerC);
  int oudRD = analogRead(lezerD);
}


void loop() {
  Serial.print(CorrecteVolgorde[2].R);
  Serial.print(CorrecteVolgorde[0].lezernummer);
  if (analogRead(lezerA) >= 1010){
    //waarde 1023//

  }

  Serial.println(intRStringR(analogRead(lezerA)));
  delay(500);
  
  Serial.println(analogRead(lezerA));
  delay(500);
  
}