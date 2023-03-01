#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

float umfang(float var) {
	return 2 * M_PI * var;
}

float flaeche(float var) {
	return M_PI * pow(var, 2);
}

float volumen(float var) {
	return M_PI * pow(var, 3) * (1.333333);
}

int main() {

	int auswahl;
    double radius, umf, flae, vol;

    printf("\nBitte geben Sie einen Radius ein: ");
    scanf("%f", &radius);

    printf("\n radius: %f\n", radius);

    printf("\nWas moechten Sie berechnen?\n1.Flaeche\n2.Umfang\n3.Volumen\nBitte 1, 2, 3 eingeben: ");
    scanf("%d", &auswahl);

    printf("\n\n %f  %f  \n\n", flaeche(20), radius);

    switch(auswahl){
    case 1:
        flae = flaeche(radius); 
        printf("\nDie Flaeche ist %.2lf\n", flae);
    break;
    case 2: 
        umf = umfang(radius);
        printf("\nDer Umfang ist %.2lf\n", umf);
    break;
    case 3: 
        vol = volumen(radius);
        printf("\nDas Volumen ist %.2lf\n", vol);
    break;
    default:
        printf("Eingabe Ungültig!!\n");
    }

    system("pause");

    return 0;
}
