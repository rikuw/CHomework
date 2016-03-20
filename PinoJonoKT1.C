#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
KT1
toteuta pinon operaatiot funktioihin (eli tee Push, Pop jne funktiot)
Pino toteutetaan staattisena int-taulukkona ja vakio MAX_KOKO kertoo
kuinka iso pino on (#define tai const). Käytä sp-muuttujaa kertomaan
missä indeksissä on pinon päällimmäisin alkio

tehkää menu
1- lisää pinoon
2- poista ja tulosta pinosta
3- tyhjennä pino
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

toteutus sirkulaarisena taulukkona ja käytä pFirst ja pLast pointtereita
jotka osoittavat jonon ekaa ja vikaa alkiota. Ja toteuta jonon opewraatiot
funktioihin ja käytä niitä eri toiminnoissa (Dequeue, jne)
*/

#define MAX_KOKO 5

struct pino 
{
	int taulu[MAX_KOKO];
	int sp;
};

int pino_taynna(struct pino* p)
{
	if (p->sp >= (MAX_KOKO - 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pino_tyhja(struct pino* p)
{
	if (p->sp == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(struct pino* p, int a)
{
	p->sp++;
	p->taulu[p->sp] = a;
}

int pop(struct pino* p)
{
	int a;
	a = p->taulu[p->sp];
	p->sp--;

	return a;
}

int show(struct pino *p)
{
	int a;
	a = p->taulu[p->sp];

	return a;
}

void print_pino(struct pino* p)
{
	int i;
	for (i = p->sp; i >= 0; i--)
	{
		printf("%d\n", p->taulu[i]);
	}
}

void main()
{
	struct pino p;
	p.sp = -1;

	struct pino* pP = &p;

	int a = 0;
	while (a != 9)
	{
		printf("-------------------\n");
		printf("Valitse komento\n");
		printf("-------------------\n");
		printf("1 - Lisaa numero pinoon\n");
		printf("2 - Poista ja tulosta paallimmainen numero\n");
		printf("3 - Tulosta paallimmainen numero\n");
		printf("4 - Tulosta pinon kaikki numerot\n");
		printf("9 - Lopeta\n");

		scanf("%d", &a);
		printf("-------------------\n");
		switch (a)
		{
		case 1:
			if (pino_taynna(pP) != 1)
			{
				int n;
				printf("Anna numero, joka lisataan pinoon : ");
				scanf("%d", &n);
				push(pP, n);
			}
			else
			{
				printf("Pino on jo taynna!\n");
			}
			break;
		case 2:
			if (pino_tyhja(pP) != 1)
			{
				int n = pop(pP);

				printf("Numero on : %d\n", n);
			}
			else
			{
				printf("Pino on tyhja!\n");
			}
			break;
		case 3:
			if (pino_tyhja(pP) != 1)
			{
				int n = show(pP);

				printf("Numero on : %d\n", n);
			}
			else
			{
				printf("Pino on tyhja!\n");
			}
			break;
		case 4:
			if (pino_tyhja(pP) != 1)
			{
				print_pino(pP);
			}
			else
			{
				printf("Pino on tyhja!\n");
			}
			break;
		}
	}
}
