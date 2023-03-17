#include <stdio.h>
#include <string.h>

void main()
{
	char UserString[100]; //Creates a char array for user input to be stored
	char Vowels[11] = { 'a','e','i','o','u','A','E','I','O','U' }; //Sets a char array filled with both lower and uppercase vowels
	char IdentVowels[100]; //An array to store identified vowels
	int i = 0; //Three iteration counters
	int j = 0;
	int k = 0;
	int Counter = 0; //Integer value to count number of vowels
	int Size = 0; //Integer to store length of user inputted string

	printf("This program will determine how many and what vowels are in a user entered string.\n");
	printf("Enter string: "); //Explains program and asks for user input
	gets(UserString); //Takes user input, spaces and all, and stores in UserString
	Size = strlen(UserString); //Sets size equal to length of user inputted string

	for (i = 0; i < Size; i++) //Sets up a nested for loop from 0 to length of UserString
	{
		for (j = 0; j < 10; j++)
		{
			if (UserString[i] == Vowels[j]) //An if loop to compare each element of UserString to Vowels
			{
				IdentVowels[k] = UserString[i]; //Copies an identified vowel from UserStrig to new array
				k++;
				Counter++; //Increases counter by 1 if a vowel was found
			}
		}
	}

	IdentVowels[k] = '\0'; //Appends IdentVowel array to curtail output
	printf("There are %d vowels.\n", Counter);
	printf("The vowels are %s\n", IdentVowels); //Prints number of vowels and what they were
}