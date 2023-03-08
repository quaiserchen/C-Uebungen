#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ANZAHL 5

float durchschnittFunktion(float afWerte[], int IAnzahl){
    float fDurchschnitt = 0.0;
    // Berechnung
  // Durchschnitt bestimmen
  // Werte addieren
  for (int i=0; i<ANZAHL; i++)
  {
    
	fDurchschnitt = fDurchschnitt+afWerte[i];
  }
  // und durch die Anzahl dividieren
  fDurchschnitt = fDurchschnitt/ANZAHL;
    return  fDurchschnitt;
}

float minimumBerechnen(float afWerte[], int IAnzahl){
    float fMin = afWerte[0];
  for (int i=1; i<ANZAHL; i++)
  {
  	// Min mit restlichen Werten vergleichen
    if (afWerte[i] < fMin) {
      fMin = afWerte[i];
    }
  } 
  return fMin;   
}

float maximumBerechnen(float afWerte[], int IAnzahl){
    int fMax = afWerte[0];
  for (int i=1; i<ANZAHL; i++)
  {
  	// Min mit restlichen Werten vergleichen
    if (afWerte[i] > fMax) {
      fMax = afWerte[i];
    }
  }  
  return fMax;  
}

float varianzBerechnen(float afWerte[], int IAnzahl, int fDurchschnitt){
    float fVarianz = 0;
    int fTemp = 0;
    for (int i = 0; i<IAnzahl; i++){
        fTemp = fTemp + pow((afWerte[i]-fDurchschnitt), 2);
        printf(" %.2f ", pow((afWerte[i]-fDurchschnitt), 2));
    }
    fVarianz = fTemp / (IAnzahl - 1);

    return fVarianz;
}

float standartabweichungBerrechnen(int fVarianz){
    float fStandartabweichung = sqrt(fVarianz);
    return fStandartabweichung;
}

int main()
{
  // Deklaration und Initialisierung der Variablen
  float afWerte[ANZAHL];
  int IAnzahl = ANZAHL;
  float fDurchschnitt = 0.0;
  float fMin = 0.0;
  float fMax = 0.0;
  float fVarianz = 0.0;
  float fStandartabweichung = 0.0;
  int i;
  
  // Eingabe
  for (i=0; i<ANZAHL; i++)
  {
    // Wert einlesen
    printf("Wert %i: ", i+1);
    fflush(stdin);
    scanf("%f", &afWerte[i]);
  }

  fDurchschnitt = durchschnittFunktion(afWerte, IAnzahl);

  // Min und Max bestimmen
  // Min und Max auf ersten Wert setzen
  fMin = minimumBerechnen(afWerte, IAnzahl);
  fMax = maximumBerechnen(afWerte, IAnzahl);

  fVarianz = varianzBerechnen(afWerte, IAnzahl, fDurchschnitt);

  fStandartabweichung = standartabweichungBerrechnen(fVarianz);

  // Ausgabe
  // Durchschnitt ausgeben
  printf("\n\nDurchschnitt = %.2f\n", fDurchschnitt);
  // Min ausgeben
  printf("Minimum = %.2f\n", fMin);
  // Max ausgeben
  printf("Maximum = %.2f\n", fMax);
  // Varianz
  printf("Varianz = %.2f\n", fVarianz);
  // Standartabweichung
  printf("Standartabweichung = %.2f\n\n", fStandartabweichung);

  // Warten auf Tastendruck
  system("pause");
  return 0;
}
//---------------------------------------------------------------------------
