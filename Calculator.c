
#include <stdio.h>

int main()
{
	//the variables being used in program
	int number1, number2;
	char nm;

	//the user's first option to choose which operator they want
	printf("Choose your operator(-,+,/,*): ");
	scanf("%c", &nm);

	//prompts the user to input 2 of their numbers for the math equation
	printf("Enter your two numbers: ");
	scanf("%d %d", &number1, &number2);

	//function allows the program to respond to specific cases which can vary depending on what the user inputs
	switch (nm)
	{
	case '+':
		printf("% d + % d=\t%d\n", number1, number2, number1 + number2);
		break;
	case '-':
		printf("%d-%d=\t%d\n", number1, number2, number1 - number2);
		break;
	case '*':
		printf("%d*%d=\t%d\n", number1, number2, number1 * number2);
		break;
	case'/':
		printf("% d / % d=\t%d\n", number1, number2, number1 / number2);
		break;
		//prompts error when integers are inputted incorrectly
	default:
		printf("Error");
	}

	return 0;

}



