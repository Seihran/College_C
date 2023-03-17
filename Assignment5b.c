#include <stdio.h>
#include <string.h>

void main()
{
	char UserString[100]; //Creates a char array for user input to be stored
	char Letters[27] = "abcdefghijklmnopqrstuvwxyz";
	char CapLetters[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//Sets a char array filled with both lower and uppercase letters
	char OnlyLetters[100]; //An array to store identified letters
	int i = 0; //Three iteration counters
	int j = 0;
	int k = 0;
	int Size = 0; //Integer to store length of user inputted string

	printf("This program will print a reversed version of a user entered string,\n");
	printf("ignoring all non-letters.\n"); //Explains program and asks for user input
	printf("Enter string: "); //Takes user input, spaces and all, and stores in UserString
	gets(UserString);
	Size = strlen(UserString); //Sets size equal to length of user inputted string

	for (i = 0; i < Size; i++) //Sets up a nested for loop from 0 to length of UserString
	{
		for (j = 0; j < 26; j++)
		{
			if (UserString[i] == Letters[j] || UserString[i] == CapLetters[j])
				//An if loop to compare each element of UserString to Letters and CapLetters
			{
				OnlyLetters[k] = UserString[i]; //Copies an identified letter from UserStrig to new array
				k++;
			}
		}
	}

	OnlyLetters[k] = '\0'; //Appends OnlyLetters array to curtail output
	strrev(OnlyLetters); //Reverses the array of Only Letters
	printf("The entered string reversed is %s", OnlyLetters); //Prints only the letters of the user input in reverse
}