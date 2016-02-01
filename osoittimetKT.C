#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
KT1
esittele int ja double tyyppiset muuttujat ja summa muuttuja. 
Lue muuttujiin
arvot Lue-funktiossa (funktio ei saa palauttaa mit‰‰n)

Laske sen j‰lkeen lukujen summa Laske-funktiossa summa muuttujaan
(funktio ei saa palauttaa mit‰‰n)

Tulosta koko laskutoimitus Tulosta-funktiossa

KT2
Esittele kaksi in tyyppist‰ muuttujaa ja laita
pointterit osoittamaan niit‰. Esittele myˆs tulo-muuttuja
ja laita kolmaspointteri osoittamaan sit‰. 
Lue arvot muuttujiin pointtereiden avulla ja
laske tulo muuttujaan muuttujien tulo k‰ytt‰en
pelk‰st‰‰n pointtereita. Tulosta koko lasku-
toimitus k‰ytt‰en pelkki‰ pointtereita. Kaikki mainiin
*/

void Lue(int *pi, double *pd)
{
	printf("Anna int luku : ");
	scanf("%d", pi);
	printf("Anna double luku : ");
	scanf("%lf", pd);
}

void Laske(int i, double d, double *psumma)
{
	*psumma = i + d;
}

void Tulosta(double summa)
{
	printf("Summa oli : %.2lf\n", summa);
}

void main()
{
	int i;
	double d;
	double summa;
	Lue(&i, &d);
	Laske(i, d, &summa);
	Tulosta(summa);
}
