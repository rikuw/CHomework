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
	int eka = 12,
		toka = 6;
	double ekaDouble = 1.11,
		tokaDouble = 88.123,
		kolmasDouble = 65.2;
	char ekaChar = 'c',
		tokaChar = 'S',
		kolmasChar = 'X';
	//printf("%+10d\n", 10);
	printf("%+4d%6.2f%2c%3c%6.3f\n%9.1f%c%+8d\n", eka, ekaDouble, ekaChar, tokaChar, tokaDouble, kolmasDouble, kolmasChar, toka);
}