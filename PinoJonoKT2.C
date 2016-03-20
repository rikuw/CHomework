#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
KT1
toteuta pinon operaatiot funktioihin (eli tee Push, Pop jne funktiot)
Pino toteutetaan staattisena int-taulukkona ja vakio MAX_KOKO kertoo
kuinka iso pino on (#define tai const). K‰yt‰ sp-muuttujaa kertomaan
miss‰ indeksiss‰ on pinon p‰‰llimm‰isin alkio

tehk‰‰ menu
1- lis‰‰ pinoon
2- poista ja tulosta pinosta
3- tyhjenn‰ pino
4- tulosta pinon kaikki alkiot
9- lopeta


KT2
esittele 10-alkioinen int taulukko "jono".
Toteuta sille matskussa olevat operaatiot

tee valikko
1 - lisaa
2 - poista ja tulosta eka
3 - tulosta eka
4 - tulosta jonon alkiot
9 - lopeta

toteutus sirkulaarisena taulukkona ja k‰yt‰ pFirst ja pLast pointtereita
jotka osoittavat jonon ekaa ja vikaa alkiota. Ja toteuta jonon opewraatiot
funktioihin ja k‰yt‰ niit‰ eri toiminnoissa (Dequeue, jne)
*/

int* add(int *pFirst, int *pLast, int num, int *start, int *end)
{
	*pLast = num;

	if (pLast != end)
	{
		pLast++;
	}
	else
	{
		pLast = start;
	}

	return pLast;
}

int* pop(int *pFirst, int *start, int *end)
{
	int ret;

	ret = *pFirst;
	if (pFirst != end)
	{
		pFirst++;
	}
	else
	{
		pFirst = start;
	}

	printf("%d\n", ret);

	return pFirst;
}

void print_first(int *pFirst)
{
	int ret;

	ret = *pFirst;

	printf("%d\n", ret);
}

void print_queue(int *pFirst, int *pLast, int *start, int *end)
{
	do
	{
		printf("%d\n", *pFirst);
		if (pFirst == pLast)
		{
			break;
		}
		else if (pFirst != end)
		{
			pFirst++;
		}
		else
		{
			pFirst = start;
		}
	} while (pFirst != pLast);
}

void main()
{
	int jono[10];
	int *tauluStart = jono;
	int *tauluEnd = &jono[10];
	int *pFirst = jono;
	int *pLast = jono;

	int a = 0;
	int n;
	while (a != 9)
	{
		printf("-------------------\n");
		printf("Valitse komento\n");
		printf("-------------------\n");
		printf("1 - Lisaa numero jonoon\n");
		printf("2 - Poista ja tulosta ensimmainen numero\n");
		printf("3 - Tulosta ensimmainen numero\n");
		printf("4 - Tulosta kaikki numerot\n");
		printf("9 - Lopeta\n");

		scanf("%d", &a);
		printf("-------------------\n");
		switch (a)
		{
		case 1:
			printf("Anna numero : ");
			scanf("%d", &n);
			pLast = add(pFirst, pLast, n, tauluStart, tauluEnd);
			break;
		case 2:
			pFirst = pop(pFirst, tauluStart, tauluEnd);
			break;
		case 3:
			print_first(pFirst);
			break;
		case 4:
			print_queue(pFirst, pLast, jono, &jono[10]);
			break;
		}
	}
}
