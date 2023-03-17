#include <stdio.h>
#include <string.h>

char * dayofweek(int day, char daystart);

void main()
{
	int day = 0;
	char daystart[7] = "Monday";

	printf("Enter date (eg. 1, 2,...31):");
	scanf("%d", &day);

	printf("\nThe day of the week for that date is: %s", dayofweek(day, daystart));
}

char * dayofweek(int day, char daystart)
{
	int i = 1;

	if (day == i || day == i + 7 || day == i + 14 || day == i + 21 || day == i + 28)
	{
		return daystart;
	}

	else if (day == i + 1 || day == i + 8 || day == i + 15 || day == i + 22 || day == i + 29)
	{
		return "Tuesday";
	}

	else if (day == i + 2 || day == i + 10 || day == i + 16 || day == i + 23 || day == i + 30)
	{
		return "Wednesday";
	}

	else if (day == i + 3 || day == i + 11 || day == i + 17 || day == i + 24)
	{
		return "Thursday";
	}

	else if (day == i + 4 || day == i + 12 || day == i + 18 || day == i + 25)
	{
		return "Friday";
	}

	else if (day == i + 5 || day == i + 13 || day == i + 19 || day == i + 26)
	{
		return "Saturday";
	}

	else
	{
		return "Sunday";
	}
}