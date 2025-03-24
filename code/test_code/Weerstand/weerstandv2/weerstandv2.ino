int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

bool gedaanA = false;
bool gedaanB = false;
bool gedaanC = false;
bool gedaanD = false;

int GeluidA=0

void setup() {
  Serial.begin(9600);
  pinMode(lezerA, INPUT_PULLUP);
  pinMode(lezerB, INPUT_PULLUP);
  pinMode(lezerC, INPUT_PULLUP);
  pinMode(lezerD, INPUT_PULLUP);

  int oudA = analogeRead(lezerA);
  int oudB = analogeRead(lezerB);
  int oudC = analogeRead(lezerC);
  int oudD = analogeRead(lezerD);
  int weerstandGeluid[8]={oudA,1,oudB,2,oudC,3,oudD,4};
  int weerstandNaarGeluid(int a){
    for (int i=0;i<8;i=i+1){
      if (weerstandGeluid[i]==a){
        return weerstandGeluid[i+1];
      }
    }
  }
  int nieuwCijfer(int a){
    for (int i=0;i<8;i=i+1){
      if
    }
  }
}

void loop() {
  int nieuwA = analogeRead(lezerA);
  if (nieuwA <= 10 && gedaan == false) {
    //nieuw1==0//
    Serial.print("videoWaarde||");
    geluidA=weerstandNaarGeluid(oudA);
    Serial.println();
    
    gedaanA = true;
  }
  if (nieuwA >= 10 && gedaanA=true) {
    //nieuw1!=0//
    int oudA = nieuwA.
    gedaanA = false;
  }

  int nieuwB = analogeRead(lezerB);
  if (nieuwB <= 10 && gedaan == false) {
    //nieuw1==0//
    Serial.print("videoWaarde||");
    Serial.println(weerstandNaarGeluid(oudB));
    gedaanB = true;
  }
  if (nieuwB >= 10 && gedaanB=true) {
    //nieuw1!=0//
    int oudB = nieuwB;
    gedaanB = false;
  }

  int nieuwC = analogeRead(lezerC);
  if (nieuwC <= 10 && gedaan == false) {
    //nieuw1==0//
    Serial.print("videoWaarde||");
    Serial.println(weerstandNaarGeluid(oudC));
    gedaanC = true;
  }
  if (nieuwC >= 10 && gedaanC=true) {
    //nieuw1!=0//
    int oudC = nieuwC;
    gedaanC = false;
  }

  int nieuwD = analogeRead(lezerD);
  if (nieuwD <= 10 && gedaan == false) {
    //nieuw1==0//
    Serial.print("videoWaarde||");
    Serial.println(weerstandNaarGeluid(oudD));
    gedaanD = true;
  }
  if (nieuwC >= 10 && gedaanC=true) {
    //nieuw1!=0//
    int oudD = nieuwD;
    gedaanD = false;
  }
//als oudA groter dan oudB...stop//
}
/*
  Zolang niet juiste volgorde
  
  Als 1vd4 nul kijk welke

  Begin muziek af te spelen bij degene die nul is
  nadien gebeurt niets 

  als terugzet controleer positie

  herhaal lus

  */
