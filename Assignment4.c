#include <stdio.h>

void main()
{
	int AveArray[20]; // Establishes an integer array of size 20
	double Average = 0.0;
	int Sum = 0;
	int i = 0;
	int j = 0;

	printf("This program takes 20 inputted integers and finds their average before \n");
	printf("displaying all inputted numbers less than this average. \n"); // Explains what the program does and displays it to user

	for (i = 0; i < 20; i++) // Creates a for loop to add user entered integers into array
	{
		printf("Enter value number %d: ", i+1);
		scanf("%d", &AveArray[i]);
		Sum += AveArray[i]; // Finds the same of all elements added to array
	}
	
	Average = Sum / (i + 1); // Finds the average of all elements in array
	printf("The Average is: %.2lf \n", Average);
	printf("The values less than the average are: ");

	for (j = 0; j < 20; j++) /* Creates a for loop to compare every element of the array to the average
							  and if less than it, displays that value */
	{
		if (AveArray[j] < Average)
		{
			printf("%d ", AveArray[j]);
		}
	}
}