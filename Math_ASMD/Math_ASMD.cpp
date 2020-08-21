#include <stdio.h>
#include<conio.h>
int main()
{
	float n1, n2;
	char ch;
	printf("Add, Subtract, Multiply, or Divide ?\n");
	printf("Enter first letter : ");
	scanf_s("%c", &ch);
	printf("Enter first number : ");
	scanf_s("%f", &n1);
	printf("Enter second number : ");
	scanf_s("%f", &n2);
	if ((ch == 'A') || (ch == 'a'))
	{
		printf("Result = %.1f", n1+n2);
	}
	else if ((ch == 'S') || (ch == 's'))
	{
		printf("Result = %.1f", n1-n2);
	}
	else if ((ch == 'M') || (ch == 'm'))
	{
		printf("Result = %.1f", n1*n2);
	}
	else if (((ch == 'D') || (ch == 'd')) && (n2!=0))
	{
		printf("Result = %.1f", n1/n2);
	}
	else
	{
		printf("Error");
	}
	return 0;
}