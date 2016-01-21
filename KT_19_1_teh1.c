#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

/*
KT1
esittele iso merkkijonotaulukko ja lue siihen k‰ytt‰j‰lt‰ teksti‰.
Tulosta tieto siit‰, kuinka pitk‰ merkkijono on ja tulosta merkit
allekkain yksi kerrallaan

KT2
esittele kaksi 100 alkioista merkkijono orig ja kaannetty
Lue k‰ytt‰j‰lt‰ orig taulukkoon teksti ja k‰‰nn‰ se kaannetty
merkkitaulukkoon nurinperin eli vika merkki ekaksi, tokavika tokaksi jne

Tutki sen j‰lkeen onko orig ja kaannetty merkkijono samoja. Jos oli
tulosta "palindromi" ja jos ei niin tulosta "eri merkkijonot"
char taulukko[100];
	int len;
	int i;
	printf("Anna teksti‰ : ");
	gets(taulukko);
	len = strlen(taulukko);
	printf("Tekstin pituus : %d\n", len);
	for (i = 0; i < len; i++)
	{
		printf("%c\n", taulukko[i]);
	}
*/


void main()
{
	char taulukko[100];
	int len;
	int i;
	printf("Anna teksti‰ : ");
	gets(taulukko);
	len = strlen(taulukko);
	printf("Tekstin pituus : %d\n", len);
	for (i = 0; i < len; i++)
	{
		printf("%c\n", taulukko[i]);
	}
}
