#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

/*
KT1
Toteuta C-kielellä ohjelma, joka
Kysyy käyttäjältä 10 kokonaislukua ja liittää ne puuhun 
matskussa esitetyn algoritmin mukaisesti. 
KAIKKI MAINIIN

Sen jälkeen käy läpi binääripuu aiemmin 
esitetyillä algoritmeilla (sisä-, esi- ja jälkijärjestys) 
ja tulosta luvut näytölle seuraavasti:
Tee nämä funktioihin

Sisäjärjestys: luvut pilkulla eroteltuna
Esijärjestys: luvut pilkulla eroteltuna
Jälkijärjestys: luvut pilkulla eroteltuna

KT2
Tee solmun lisääminen Funktioon. Mainissa luo silmukassa edelleen
uusi solmu, mutta varsinainen lisääminen puuhun tapahtuu funktiossa


EKSTRA (omaksi iloksi tai turmioksi)
toteuta pinon operaatiot funktioihin (eli tee Push, Pop jne funktiot)
Pino toteutetaan dynaamisena int-taulukkona. Käytä sp-muuttujaa kertomaan
missä indeksissä on pinon päällimmäisin alkio. Kun pinoon lisätään uusi
alkio, niin käytä realloc-funktiota, jolla voit kasvattaa/pienentää
dynaamisen taulukon kokoa. Sama homma poistolle. Eli taulukko pysyy
aina oikean kokoisena. Tutki helpistä tarkkaan miten realloc toimii,
säilyykö vanhat arvot, pysyykö taulukko paikallaan vai muuttuuko sen
paikka muistissa jne.

tehkää menu
1- lisää pinoon
2- poista ja tulosta pinosta
3- tyhjennä pino
4- tulosta pinon kaikki alkiot
9- lopeta

int* pPino = NULL;
int sp = -1;
*/

struct Node
{
	struct Node* pLeft;
	struct Node* pRight;
	double data;
};

void esi(struct Node** pCur)
{
	if (*pCur != NULL)
	{
		printf("%.2lf, ", (*pCur)->data);
		esi(&(*pCur)->pLeft);
		esi(&(*pCur)->pRight);
	}
}

void jalki(struct Node** pCur)
{
	if (*pCur != NULL)
	{
		jalki(&(*pCur)->pLeft);
		jalki(&(*pCur)->pRight);
		printf("%.2lf, ", (*pCur)->data);
	}
}

void sisa(struct Node** pCur)
{
	if (*pCur != NULL)
	{
		sisa(&(*pCur)->pLeft);
		printf("%.2lf, ", (*pCur)->data);
		sisa(&(*pCur)->pRight);
	}
}

void lisaa(struct Node** pCur, struct Node** pNew)
{
	struct Node* pUusi = malloc(sizeof(struct Node));

	if (*pCur == NULL)
	{
		*pCur = *pNew;
	}
	else
	{
		struct Node* pR = *pCur;
		struct Node* pS1 = NULL;
		struct Node* pS2 = NULL;

		while (pR != NULL)
		{
			pS2 = pR;
			if ((*pNew)->data < pR->data)
			{
				pR = pR->pLeft;
			}
			else
			{
				pR = pR->pRight;
				pS1 = pS2;
			}
		}

		if (pS1 == pS2)
		{
			pS2->pRight = *pNew;
		}
		else
		{
			pS2->pLeft = *pNew;
		}
	}
}


void main()
{
	int i;
	struct Node* pRoot = NULL;
	struct Node* pUusi;

	for (i = 0; i < 10; i++)
	{
		struct Node* pUusi = malloc(sizeof(struct Node));

		if (pUusi)
		{
			printf("Anna luku : ");
			scanf("%lf", &pUusi->data);
			pUusi->pLeft = NULL;
			pUusi->pRight = NULL;

			lisaa(&pRoot, &pUusi);
		}
	}

	sisa(&pRoot);
}
