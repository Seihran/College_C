#include <stdio.h>
#include <math.h>

//Basic function
/*
void printMessage(void);

int main(void)
{
	printMessage();

	return 0;
}

void printMessage(void)
{
	printf("A message for you:\n\n");
	printf("Have a nice day!\n");
}
*/

//Details of functions
/*
type functionName (parameter 1,....,parameter n)
A function can never return more than one value
Ex: int functionA(int a, int b, float c)
	result = functionA(7, 3 + a, dollars)

Function prototypes are not needed if written before main
*/

//Example of function

/*
void printMessage(int counter);

int main(void)
{
	int num;
	int k = 7;

	printf("Enter an integer: ");
	scanf("%d", &num);
	printMessage(num);

	return 0;
}

void printMessage(int counter)
{
	int i;

	for (i = 0; i < counter; i++)
	{
		printf("Have a nice day!\n");
	}

	printf("Message was displayed %d times %d.\n", i ,k);
}
*/

//More examples of functions

/*
double Area_circle(double Radius);

double Area_circle(double Radius)
{
	double Area = 0;
	double Pi = 3.14159265358979323846;

	Area = Pi * (Radius * Radius);

	return Area;
}

void main(void)
{
	double Radius = 0;
	double Area;

	printf("Enter radius of circle: \n");
	scanf("%lf", &Radius);

	Area = Area_circle(Radius);

	printf("The area of the circle is %.3lf \n", Area);
}
*/


/*
void reverseSentence();

int main()
{
	printf("Enter a sentence: ");
	reverseSentence();

	return 0;
}

void reverseSentence()
{
	char c;
	scanf("%c", &c);

	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}
*/
