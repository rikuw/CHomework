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

void main()
{
	int a, b, tulo;
	int *ap;
	int *bp;
	int *tulop;
	ap = &a;
	bp = &b;
	tulop = &tulo;

	printf("Anna luku 1 : ");
	scanf("%d", ap);
	printf("Anna luku 2 : ");
	scanf("%d", bp);
	*tulop = *ap * *bp;
	printf("Tulo oli : %d\n", *tulop);
}
