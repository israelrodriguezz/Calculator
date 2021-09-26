#include <stdio.h>


int CaError[] = { 0 };

int calc()
{
	//the variables being used in program
	union data {
		int number1, number2;
		char nm;
	};

	struct CalcVariables {
		int number1, number2;
		char nm;
	}Cava;


	printf("Welcome to the Rodriguez Calculator!\n\n\n");
	//the user's first option to choose which operator they want which the program will prompt
	printf("Which operator are you using? (-,+,/,*): ");
	//allows user to input the operator
	scanf_s("%c", &Cava.nm);

	//prompts the user to input 2 of their numbers for the math equation
	printf("Enter your first number: ");
	//allow user to input both integers
	scanf_s("%d", &Cava.number1);
	printf("Enter your second number: ");
	scanf_s("%d", &Cava.number2);

	//function allows the program to respond to specific cases which can vary depending on what the user inputs
	switch (Cava.nm)
	{
		//program will react and add 2 integers when + is prompted
	case '+':
		printf("The result of % d + % d=\t%d\n", Cava.number1, Cava.number2, Cava.number1 + Cava.number2);
		break;
		//program will react and subtract 2 integers when - is prompted
	case '-':
		printf("The result of %d-%d=\t%d\n", Cava.number1, Cava.number2, Cava.number1 - Cava.number2);
		break;
		//program will reactand multiply 2 integers when * is prompted
	case '*':
		printf("The result of %d*%d=\t%d\n", Cava.number1, Cava.number2, Cava.number1 * Cava.number2);
		break;
		//program will react and divide 2 integers when / is prompted
	case'/':
		//program will print cannot divide by 0 to prevent error in application
		if (Cava.number2 == CaError[0]) {
			printf("Sorry! Cannot divide by 0.\n");
		}
		else {
			printf("The result of % d / % d=\t%d\n", Cava.number1, Cava.number2, Cava.number1 / Cava.number2);
		}
		break;
		//prompts error when operators are inputted incorrectly
	default:
		printf("Error");
		return -1;
	}
	return 0;
}