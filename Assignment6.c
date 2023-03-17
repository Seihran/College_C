#include <stdio.h>

void DisplayInstructions(void)
/* Describes what the main program does and prints it to screen*/
{
	printf("This program takes 24 integers from the user and inputs them into two arrays.\n");
	printf("These arrays represent the rainfall across two 12 month cycles, 2 years.\n");
	printf("This program then compares the rainfall between the 2 years and displays,\n");
	printf("the number of months where the rainfall has increased from the previous year.\n");
}

int HigherRainfall(int YearOne[], int YearTwo[])
/* A function that compares both user input arrays and increases an integer called Counter if
   array YearTwo has a higher value for the same month as YearOne.*/
{
	int j = 0;
	int Counter = 0; //An integer to count how many months have higher rainfall

	for (j = 0; j < 12; j++) //A for, if loop that compares each element of the two arrays to each other
	{
		if (YearTwo[j] > YearOne[j])
			Counter++;
	}

	return Counter; //Returns the int value of Counter to the main program
}

int DisplayAnswer(int MoreRain)
/* Prints to screen the number of months with a higher rainfall by taking an argument from the main program*/
{
	printf("The number of months which had an increased rainfall is %d.", MoreRain);
}

void main()
{
	int YearOne[12]; //An array of 12 months for the first year
	int YearTwo[12]; //An array of 12 months for the second year
	int i = 0; //Iteration counter
	int MoreRain = 0; //An integer to store the number of months that had more rainfall

	DisplayInstructions(); //Calls the function to print what the program does to screen

	printf("Enter the rainfall for each month for the first year: \n"); //Prompts user for first year's rainfall

	for (i = 0; i < 12; i++) //A loop to prompt and assign a user input into each element of the first array
	{
		printf("Month %d:", i + 1);
		scanf("%d", &YearOne[i]);
	}

	printf("Enter the rainfall for each month for the second year: \n"); //Prompts user for second year's rainfall

	for (i = 0; i < 12; i++) //A loop to prompt and assign a user input into each element of the second array
	{
		printf("Month %d:", i + 1);
		scanf("%d", &YearTwo[i]);
	}

	MoreRain = HigherRainfall(YearOne, YearTwo); //Assigns the returned integer from the HigherRainfall function to MoreRain
	DisplayAnswer(MoreRain); //Calls the function to display the number of months with increased rainfall using the integer MoreRain
}