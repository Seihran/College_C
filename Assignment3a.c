#include <stdio.h>

void main()
{
	int Values = 0;
	float Total = 0.0;
	float Average = 0.0;
	int Count = 0;

	printf("This program will sum a total of integer inputs entered and average them, \n");
	printf("until a value of 9999 is entered. \n");
	//This explains what the program does

	do
	{
		printf("Enter value: "); //Prompts the user for the first input
		scanf("%d", &Values); //Assigns input values to "Values"
		Total += Values; //Sums these values
		Count++; //Increases count value by 1
	} while (Values != 9999); //Ends the do while loop when user enters 9999

	Total = Total - 9999;
	Count = Count - 1;
	//Removes last input from sum of values and count as it was exiting value
	Average = Total / Count; //Finds the average by dividing sum by no. of inputs

	printf("There were %d values entered, the average is %.2f", Count, Average);
}