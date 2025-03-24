int lezerA = A0;
int lezerB = A1;
int lezerC = A2;
int lezerD = A3;

bool gedaanA = false;
bool gedaanB = false;
bool gedaanC = false;
bool gedaanD = false;

void setup() {
    Serial.begin(9600);
    pinMode(lezerA, INPUT_PULLUP);
    pinMode(lezerB, INPUT_PULLUP);
    pinMode(lezerC, INPUT_PULLUP);
    pinMode(lezerD, INPUT_PULLUP);
}

int weerstandNaarGeluid(int a) {
    int weerstandGeluid[8] = {100, 1, 200, 2, 300, 3, 400, 4}; // Pas deze waarden aan
    for (int i = 0; i < 8; i += 2) {
        if (weerstandGeluid[i] == a) {
            return weerstandGeluid[i + 1];
        }
    }
    return -1; // Geen match gevonden
}

void loop() {
    int nieuwA = analogRead(lezerA);
    if (nieuwA <= 10 && gedaanA == false) {
        Serial.print("videoWaarde||");
        Serial.println(weerstandNaarGeluid(nieuwA));
        gedaanA = true;
    }
    if (nieuwA >= 10 && gedaanA == true) {
        gedaanA = false;
    }

    int nieuwB = analogRead(lezerB);
    if (nieuwB <= 10 && gedaanB == false) {
        Serial.print("videoWaarde||");
        Serial.println(weerstandNaarGeluid(nieuwB));
        gedaanB = true;
    }
    if (nieuwB >= 10 && gedaanB == true) {
        gedaanB = false;
    }

    int nieuwC = analogRead(lezerC);
    if (nieuwC <= 10 && gedaanC == false) {
        Serial.print("videoWaarde||");
        Serial.println(weerstandNaarGeluid(nieuwC));
        gedaanC = true;
    }
    if (nieuwC >= 10 && gedaanC == true) {
        gedaanC = false;
    }

    int nieuwD = analogRead(lezerD);
    if (nieuwD <= 10 && gedaanD == false) {
        Serial.print("videoWaarde||");
        Serial.println(weerstandNaarGeluid(nieuwD));
        gedaanD = true;
    }
    if (nieuwD >= 10 && gedaanD == true) {
        gedaanD = false;
    }
}
