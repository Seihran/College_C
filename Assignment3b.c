#include <stdio.h>

void main()
{
	int Sum = 0;
	int EvenNum = 0;

	while (EvenNum < 31) //This loop will continue until it reaches 31
	{ 
		Sum += EvenNum; //This adds every iteration of EvenNum together
		EvenNum = EvenNum + 2;
		//This increases EvenNum by two and ensures it only equals even integers
	}

	printf("The sum of the even integers from 2 to 30 is %d\n", Sum);
}