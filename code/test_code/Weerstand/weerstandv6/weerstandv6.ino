int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

bool gedaanRA = false;

bool controle() {
  if (CorrecteVolgorde[0].R == HuidigeVolgorde[0].R 
    && CorrecteVolgorde[1].R == HuidigeVolgorde[1].R 
    && CorrecteVolgorde[2].R == HuidigeVolgorde[2].R 
    && CorrecteVolgorde[3].R == HuidigeVolgorde[3].R) {
  return true;
    } 
    
    else
    return false;
  }

  String intRStringR(int R) {
    if (R <= 150) {
      return "RA";
    }
    if (R > 200 && R <= 450) {
      return "RB";
    }
    if (R > 450 && R <= 800) {
      return "RC";
    }
    if (R > 800 && R <= 960) {
      return "RD";
    } else
      return "Geen weerstand";
  }

  struct Data {
    int lezernummer;
    String R;
  };

  Data CorrecteVolgorde[] = {
    { 1, "RD" },
    { 2, "RB" },
    { 3, "RC" },
    { 4, "RA" }
  };


  Data HuidigeVolgorde[] = {
    { 1, "RD" },
    { 2, "RB" },
    { 3, "RC" },
    { 4, "RA" }
  };

  int oudRA = analogRead(lezerA);
  int oudRB = analogRead(lezerB);
  int oudRC = analogRead(lezerC);
  int oudRD = analogRead(lezerD);

  void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(lezerA, INPUT_PULLUP);
    pinMode(lezerB, INPUT_PULLUP);
    pinMode(lezerC, INPUT_PULLUP);
    pinMode(lezerD, INPUT_PULLUP);
  }


  void loop() {
 
    bool a = controle()

    if (a == true){
      Serial.print("Joepieeeee");
    } 
    else {
      Serial.print("jessssss");
    }
    


    if (analogRead(lezerA) >= 1010) {
      //waarde 1023//
    }

    Serial.println(intRStringR(analogRead(lezerA)));
    delay(500);
    
    Serial.println(analogRead(lezerA));
    delay(500);
  }