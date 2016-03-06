#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
laita for-silmukka pyˆr‰ht‰m‰‰n 5 kertaa.
Luo jokaisen kierroksen aluksi uusi solmu ja pUusi
pointteri alkaa osoittamaan sit‰. Lue k‰ytt‰j‰lt‰
solmun data-kentt‰‰n arvo ja lis‰‰ uusi solmu
linkitetyn listan ensimm‰iseksi

tutki lis‰yksess‰ kaksi tapausta eli se jos lista on 
tyhj‰ ja jos listassa on jo alkioita

KT1
Tulosta listan alkioiden datat

KT2
Lis‰‰ ohjelman loppuun dynaamisten solmujen vapautus

KT3
Muuta uuden solmun lis‰ys tapahtuvaksi aina listan viimeiseksi
*/

struct Solmu
{
	struct Solmu* pNext;
	int data;
};

void main()
{
	struct Solmu* pLista = NULL;
	struct Solmu* pUusi;
	int i;

	for (i = 1; i <= 5; i++)
	{
		// luo uusi solmu
		pUusi = malloc(sizeof(struct Solmu));

		if (pUusi)
		{
			// kysy data-kentt‰‰n k‰ytt‰j‰lt‰ arvo
			printf("Anna arvo : ");
			scanf("%d", &pUusi->data);
			// lis‰‰ uusi solmu listaan. tutki kaksi eri
			// tapausta eli jos lista on tyhj‰ tai listassa
			// on alkioita
			if (pLista == NULL) // lista on tyhj‰
			{
				pUusi->pNext = NULL;
				pLista = pUusi;
			}
			else // listassa on alkioita
			{
				pUusi->pNext = pLista;
				pLista = pUusi;
			}
		}
	}

	// KT 1

	int valmis = 0;
	struct Solmu* pNyk = pLista;

	do
	{
		if (pNyk->pNext == NULL)
		{
			valmis = 1;
		}

		int a = pNyk->data;
		printf("Data : %d\n", a);
		pNyk = pNyk->pNext;
	} while (valmis != 1);

	// KT 2

	valmis = 0;

	do
	{
		if (pLista->pNext == NULL)
		{
			valmis = 1;
			free(pLista);
			pLista = NULL;
		}
		else
		{
			pUusi = pLista->pNext;
			free(pLista);
			pLista = pUusi;
			pUusi = pUusi->pNext;
		}
	} while (valmis != 1);

	// KT 3

	for (i = 1; i <= 5; i++)
	{
		pUusi = malloc(sizeof(struct Solmu));

		if (pUusi)
		{
			printf("Anna arvo : ");
			scanf("%d", &pUusi->data);
			if (pLista == NULL)
			{
				pUusi->pNext = NULL;
				pLista = pUusi;
			}
			else
			{
				struct Solmu* pTemp = pLista;
				int valmis = 0;
				while (valmis != 1)
				{
					if (pTemp->pNext == NULL)
					{
						valmis = 1;
						pTemp->pNext = pUusi;
						pUusi->pNext = NULL;
					}
					else
					{
						pTemp = pTemp->pNext;
					}
				}
			}
		}
	}

	// Tulostaminen

	pNyk = pLista;

	valmis = 0;
	do
	{
		if (pNyk->pNext == NULL)
		{
			valmis = 1;
		}

		int a = pNyk->data;
		printf("Data : %d\n", a);
		pNyk = pNyk->pNext;
	} while (valmis != 1);

	// Vapauttaminen

	valmis = 0;
	do
	{
		if (pLista->pNext == NULL)
		{
			valmis = 1;
			free(pLista);
			pLista = NULL;
		}
		else
		{
			pUusi = pLista->pNext;
			free(pLista);
			pLista = pUusi;
			pUusi = pUusi->pNext;
		}
	} while (valmis != 1);
}
