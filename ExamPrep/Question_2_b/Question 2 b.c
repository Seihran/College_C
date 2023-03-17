#include <stdio.h>

void Cumulative(int start_array[7]);

void main()
{
	int start_array[7] = { 4,2,3,3,5,8,3 };

	Cumulative(start_array);
}

void Cumulative(int start_array[7])
{
	int final_array[7];
	int temp = 0;
	int i = 0;

	final_array[0] = start_array[0];

	for (i = 1; i < 7; i++)
	{
		temp = start_array[i];
		final_array[i] = final_array[i-1] + temp;
	}
}