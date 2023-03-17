#include <stdio.h>
void main()
{
	int x = 0;
	int y = 0;
	printf("Input number: ");
	scanf("%d", &x);
	y = x * 2;
	printf("%d doubled is %d.\n", x, y);
}