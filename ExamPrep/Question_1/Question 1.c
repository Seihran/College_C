#include <stdio.h>

int evenodd(int firstarray[20], int secondarray[20]);

void main()
{
	int firstarray[20];
	int secondarray[20];
	int i = 0;
	int evennum = 0;

	for (i = 0; i < 20; i++)
	{
		printf("Array 1, number %d:", i + 1);
		scanf("%d", &firstarray[i]);
	}

	for (i = 0; i < 20; i++)
	{
		printf("Array 2, number %d:", i + 1);
		scanf("%d", &secondarray[i]);
	}

	evennum = evenodd(firstarray, secondarray);

	printf("\nThe even numbers in the second array are: %d", evennum);
}

int evenodd(int firstarray[20], int secondarray[20])
{
	int i = 0;
	int oddcount = 0;
	int evencount = 0;

	for (i = 0; i < 20; i++)
	{
		if (firstarray[i] % 2 != 0)
		{
			oddcount++;
		}
	}

	for (i = 0; i < 20; i++)
	{
		if (secondarray[i] % 2 == 0)
		{
			evencount++;
		}
	}

	printf("\nThe number of odd numbers in the first array is: %d", oddcount);

	return evencount;
}