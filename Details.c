#include <stdio.h>

int CaError[] = { 0 };

int calc()
{
	//the variables being used in program
	int number1, number2;
	char nm;

	//the user's first option to choose which operator they want which the program will prompt
	printf("Which operator are you using? (-,+,/,*): ");
	//allows user to input the operator
	scanf("%c", &nm);

	//prompts the user to input 2 of their numbers for the math equation
	printf("Enter your two numbers: ");
	//allow user to input both integers
	scanf("%d %d", &number1, &number2);

	//function allows the program to respond to specific cases which can vary depending on what the user inputs
	switch (nm)
	{
		//program will react and add 2 integers when + is prompted
	case '+':
		printf("% d + % d=\t%d\n", number1, number2, number1 + number2);
		break;
		//program will react and subtract 2 integers when - is prompted
	case '-':
		printf("%d-%d=\t%d\n", number1, number2, number1 - number2);
		break;
		//program will reactand multiply 2 integers when * is prompted
	case '*':
		printf("%d*%d=\t%d\n", number1, number2, number1 * number2);
		break;
		//program will react and divide 2 integers when / is prompted
	case'/':
		//program will print cannot divide by 0 to prevent error in application
		if (number2 == CaError[0]) {
			printf("Sorry! Cannot divide by 0.\n");
		}
		else {
			printf("% d / % d=\t%d\n", number1, number2, number1 / number2);
		}
		break;
		//prompts error when operators are inputted incorrectly
	default:
		printf("Error");
		return -1;
	}
	return 0;
}