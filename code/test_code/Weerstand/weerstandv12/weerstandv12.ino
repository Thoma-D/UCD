int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

int ledPinA = 10;
int ledPinB = 9;
int ledPinC = 8;
int ledPinD = 7;

String oudeRAinstring = "";
String oudeRBinstring = "";
String oudeRCinstring = "";
String oudeRDinstring = "";

bool gedaanLezerA = false;
bool gedaanLezerB = false;
bool gedaanLezerC = false;
bool gedaanLezerD = false;

int buttonPin = 6;

String intRStringR(int R) {
  if (R > 15 && R <= 250) {
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
  { 4, "RA" }
};

int oudLezerA = analogRead(lezerA);
int oudLezerB = analogRead(lezerB);
int oudLezerC = analogRead(lezerC);
int oudLezerD = analogRead(lezerD);


bool controle() {
  if (CorrecteVolgorde[0].R == HuidigeVolgorde[0].R
      && CorrecteVolgorde[1].R == HuidigeVolgorde[1].R
      && CorrecteVolgorde[2].R == HuidigeVolgorde[2].R
      && CorrecteVolgorde[3].R == HuidigeVolgorde[3].R) {
    return true;
  } else
    return false;
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lezerA, INPUT_PULLUP);
  pinMode(lezerB, INPUT_PULLUP);
  pinMode(lezerC, INPUT_PULLUP);
  pinMode(lezerD, INPUT_PULLUP);
  pinMode(ledPinA, OUTPUT);
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinC, OUTPUT);
  pinMode(ledPinD, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
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

  if (analogRead(lezerA) <= 15 && gedaanLezerA == false) {
    //detecteerd 0
    digitalWrite(ledPinA, LOW);
    oudeRAinstring = intRStringR(oudLezerA);
    // = "RC"
    // koppel naar protopie,
    Serial.print("video||");
    Serial.println(oudeRAinstring);
    gedaanLezerA = true;
  }

  if (analogRead(lezerA) >= 15 && gedaanLezerA == true) {
    //stringRNaarIntPositie(oudeRAinstring);
    //cijfer in array veranderd
    digitalWrite(ledPinA, HIGH);
    oudLezerA = analogRead(lezerA);
    for (int i = 0; i < 4; i++) {
      if (HuidigeVolgorde[i].R == oudeRAinstring) {
        HuidigeVolgorde[i].lezernummer = 1;
      }
    }

    for (int i = 0; i < 4; i++) {
      Serial.print(HuidigeVolgorde[i].lezernummer);
      Serial.print(": ");
      Serial.println(HuidigeVolgorde[i].R);
    }
    gedaanLezerA = false;
  }









  if (analogRead(lezerB) <= 15 && gedaanLezerB == false) {
    //detecteerd 0
    digitalWrite(ledPinB, LOW);
    oudeRBinstring = intRStringR(oudLezerB);
    // = "RC"
    // koppel naar protopie,
    Serial.print("video||");
    Serial.println(oudeRBinstring);
    gedaanLezerB = true;
  }
  if (analogRead(lezerB) >= 15 && gedaanLezerB == true) {
    //stringRNaarIntPositie(oudeRAinstring);
    digitalWrite(ledPinB, HIGH);
    //cijfer in array veranderd
    oudLezerB = analogRead(lezerB);
    for (int i = 0; i < 4; i++) {
      if (HuidigeVolgorde[i].R == oudeRBinstring) {
        HuidigeVolgorde[i].lezernummer = 2;
      }
    }

    for (int i = 0; i < 4; i++) {
      Serial.print(HuidigeVolgorde[i].lezernummer);
      Serial.print(": ");
      Serial.println(HuidigeVolgorde[i].R);
    }
    gedaanLezerB = false;
  }










  if (analogRead(lezerC) <= 15 && gedaanLezerC == false) {
    //detecteerd 0
    digitalWrite(ledPinC, LOW);
    oudeRCinstring = intRStringR(oudLezerC);
    // = "RC"
    // koppel naar protopie,
    Serial.print("video||");
    Serial.println(oudeRCinstring);
    gedaanLezerC = true;
  }

  if (analogRead(lezerC) >= 15 && gedaanLezerC == true) {
    //stringRNaarIntPositie(oudeRAinstring);
    digitalWrite(ledPinC, HIGH);
    //cijfer in array veranderd
    oudLezerC = analogRead(lezerC);
    for (int i = 0; i < 4; i++) {
      if (HuidigeVolgorde[i].R == oudeRCinstring) {
        HuidigeVolgorde[i].lezernummer = 3;
      }
    }

    for (int i = 0; i < 4; i++) {
      Serial.print(HuidigeVolgorde[i].lezernummer);
      Serial.print(": ");
      Serial.println(HuidigeVolgorde[i].R);
    }
    gedaanLezerC = false;
  }








  if (analogRead(lezerD) <= 15 && gedaanLezerD == false) {
    //detecteerd 0
    digitalWrite(ledPinD, LOW);
    oudeRDinstring = intRStringR(oudLezerD);
    // = "RC"
    // koppel naar protopie,
    Serial.print("video||");
    Serial.println(oudeRDinstring);
    gedaanLezerD = true;
  }

  if (analogRead(lezerD) >= 15 && gedaanLezerD == true) {
    //stringRNaarIntPositie(oudeRAinstring);
    digitalWrite(ledPinD, HIGH);
    //cijfer in array veranderd
    oudLezerD = analogRead(lezerD);
    for (int i = 0; i < 4; i++) {
      if (HuidigeVolgorde[i].R == oudeRDinstring) {
        HuidigeVolgorde[i].lezernummer = 4;
      }
    }

    for (int i = 0; i < 4; i++) {
      Serial.print(HuidigeVolgorde[i].lezernummer);
      Serial.print(": ");
      Serial.println(HuidigeVolgorde[i].R);
    }
    gedaanLezerD = false;
  }

  if (digitalRead(buttonPin) == LOW) {
    if (controle() == true) {
      Serial.print("True");
    } else {
      Serial.print("False");
    }
    delay(1000);
  }
}
/*
    Serial.println(intRStringR(analogRead(lezerA)));
    delay(500);
    
    Serial.println(analogRead(lezerA));
    delay(500);
  }
  */
