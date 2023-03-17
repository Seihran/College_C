#include <stdio.h>

void main()
{
	float results[150];
	int i = 0;
	float high = 0;
	float fail[150];
	int count = 0;

	for (i = 0; i < 150; i++)
	{
		printf("Enter results of student %d:", i + 1);
		scanf("%f", &results[i]);

		if (results[i] > high)
		{
			high = results[i];
		}
	}
	
	printf("\nThe highest mark achieved was: %0.2f", high);

	for (i = 0; i < 150; i++)
	{
		if (results[i] < (high / 2))
		{
			fail[i] = results[i];
			count++;
		}
	}

	printf("\nThe number of students who scored less than half of the highest score are: %d", count);
}