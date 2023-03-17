#include <stdio.h>
#include <string.h>

/*int main()
{
	char arr[6] = { 'h', 'e', 'l', 'l', 'o' };
	char arr2[6] = { 'h', 'e', 'l', 'l', 'o' };

	if (strcmp(arr, arr2) == 0)
	{
		printf("Same");
	}
	else
	{
		printf("Not");
	}
}*/

int main()
{
	int count = 0;

	for (int i = 1; i <= 18; i++)
	{
		count++;
	}
	printf("%d", count);
}