int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

String oudeRAinstring= "";

bool gedaanRA = false;

  String intRStringR(int R) {
    if (R>15 && R <= 250) {
      return "RA";
    }
    if (R > 250 && R <= 650) {
      return "RB";
    }
    if (R > 650 && R <= 825) {
      return "RC";
    }
    if (R > 825 && R <= 1000) {
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
    { 4, "RB" }
  };

  int oudLezerA = analogRead(lezerA);
  int oudLezerB = analogRead(lezerB);
  int oudLezerC = analogRead(lezerC);
  int oudLezerD = analogRead(lezerD);

  void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(lezerA, INPUT_PULLUP);
    pinMode(lezerB, INPUT_PULLUP);
    pinMode(lezerC, INPUT_PULLUP);
    pinMode(lezerD, INPUT_PULLUP);
  }

bool controle() {
  if (CorrecteVolgorde[0].R == HuidigeVolgorde[0].R 
    && CorrecteVolgorde[1].R == HuidigeVolgorde[1].R 
    && CorrecteVolgorde[2].R == HuidigeVolgorde[2].R 
    && CorrecteVolgorde[3].R == HuidigeVolgorde[3].R) {
      return true;
    } else
    return false;
  }

  void loop() {
    /*
    Serial.print(CorrecteVolgorde[2].R);
    Serial.println (CorrecteVolgorde[0].lezernummer);
    if (controle()== true){
      Serial.print("Joepieeeee");
    } 
    else {
      Serial.print("jessssss");
    }
    */

    if (analogRead(lezerA)<=15) {
      //detecteerd 0
      String oudeRAinstring=intRStringR(oudLezerA);
      // = "RC"
    }

    int stringRNaarIntR(String R){
      For (int i=0;<4;i++){
          if (huidigevolgorde[i].R==oudeRAinstring){
            huidigevolgorde[i].lezernummer=1;
          }
      }
      
    }

    /*Serial.println(intRStringR(analogRead(lezerA)));
    delay(500);
    
    Serial.println(analogRead(lezerA));
    delay(500);
    */


  }
