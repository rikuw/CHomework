#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void sortNums(int* a, int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
}

void printArray(int* a, int len)
{
	int i;
	printf("\nThe numbers sorted are : ");
	for (i = 0; i < len; i++)
	{
		if (i < len - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}

void readNumsToArray(int* a, int len)
{
	int i;
	printf("\nPlease type the numbers you want to sort and press enter after each : \n");
	for (i = 0; i < len; i++)
	{
		scanf("%d", &a[i]);
	}
}

void main()
{
	int i;
	int* ar;
	printf("Enter the number of numbers you want to sort : ");
	scanf("%d", &i);
	ar = malloc(sizeof(int) * i);
	if (ar == NULL)
	{
		printf("ERROR: Error while allocating memory.\n");
	}
	else 
	{
		readNumsToArray(ar, i);
		sortNums(ar, i);
		printArray(ar, i);
		free(ar);
	}
}
