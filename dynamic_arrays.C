#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
/*

*/

void main()
{
	int lkm;
	printf("Montako lukua : ");
	scanf("%d", &lkm);

	int *p;

	p = (int*) malloc(lkm * sizeof(int));

	if (p == NULL)
	{
		printf("Muistinvaraus epaonnistui\n");
	}
	else
	{
		int *sp = p;
		int i;
		for (i = 0; i < lkm; i++)
		{
			printf("Anna luku : ");
			scanf("%d", &p[i]);
		}

		int j;
		for (j = 0; j < lkm; j++)
		{
			printf("Luku %d oli : %d\n", j + 1, *p);
			p++;
		}
		free(sp);
	}
}
