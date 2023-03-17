#include <stdio.h>

void main()
{
	float assignment = 0.0;
	float lab = 0.0;
	float exam = 0.0;
	float average = 0.0;
	printf("Enter marks for assignment: ");
	scanf("%f", &assignment);
	printf("Enter marks for lab: ");
	scanf("%f", &lab);
	printf("Enter marks for exam: ");
	scanf("%f", &exam);
	average = (assignment / 4) + (lab / 4) + (exam / 2);
	if (average >= 70)
		printf("The overall grade is an A with a value of %.0f%%", average); 
	else if (average >= 60)
		printf("The overall grade is a B with a value of %.0f%%", average);
	else if (average >= 50)
		printf("The overall grade is a C with a value of %.0f%%", average);
	else if (average >= 40)
		printf("The overall grade is a D with a value of %.0f%%", average);
	else if (average < 40)
		printf("The overall grade is an E with a value of %.0f%%", average);
}