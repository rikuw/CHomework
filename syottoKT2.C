#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
KT1
123456789012345678901
 +12  1.11 c  S88.123
     65.2X      +6

kaikki arvot on muuttujissa ja printf-lauseissa
ei saa olla yhtään välilyöntiä

KT2
Esittele float ja double muuttujat. Lue
käyttäjältä arvot niihin ja tulosta
suurempi 2 desimaalin tarkkuudella.
*/

void main()
{
	float f;
	double d;
	printf("Anna float arvo : ");
	scanf("%f", &f);
	printf("Anna double arvo : ");
	scanf("%lf", &d);
	if (f > d) 
	{
		printf("Suurempi oli : %.2f\n", f);
	}
	else 
	{
		printf("Suurempi oli : %.2f\n", d);
	}
}