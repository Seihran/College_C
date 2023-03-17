#include <stdio.h>

void main()
{
	int i = 0;
	int total = 0;

	for (i = 0; i < 1000; i++)
	{
		if (i % 5 != 0)
		{
			total = i + total;
		}
	}

	printf("\n%d", total);
}