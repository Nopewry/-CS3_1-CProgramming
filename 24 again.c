//24 calculator
#include <stdio.h>

void plus(float a, float b);
void minus(float a, float b);
void multiply(float a, float b);
void divide(float a, float b);
void mod(int a, int b);
void display(float a, float b, char operation, float result);

int main()
{
	int con, oper;
	float a, b;
	con = 1;
	while(con == 1)
	{
		printf("choose opertor\n1.plus\n2.minus\n3.multiply\n4.divide\n5.mod\n");
		scanf("%d", &oper);
		printf("input first number : ");
		scanf("%f", &a);
		printf("input secound number : ");
		scanf("%f", &b);
		if(oper == 1)
		{
			plus(a, b);
		}
		else if(oper == 2)
		{
			minus(a, b);
		}
		else if(oper == 3)
		{
			multiply(a, b);
		}
		else if(oper == 4)
		{
			divide(a, b);
		}
		else if(oper == 5)
		{
			mod(a, b);
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}

void plus(float a, float b)
{
	float result;
	char ope = '+' ;
	result = a + b;
	display(a, b, ope, result);
}

void minus(float a, float b)
{
	float result;
	char ope = '-' ;
	result = a - b;
	display(a, b, ope, result);
}

void multiply(float a, float b)
{
	float result;
	char ope = '*' ;
	result = a * b;
	display(a, b, ope, result);
}

void divide(float a, float b)
{
	float result;
	char ope = '/' ;
	if(b != 0)
	{
		result = a / b;
		display(a, b, ope, result);
	}
	else
	{
		printf("Cannot divide by zero\n");
	}
}

void mod(int a, int b)
{
	float result;
	char ope = '%' ;
	if(b != 0)
	{
		result = (int)a % (int)b;
		display(a, b, ope, result);
	}
	else
	{
		printf("Result is undefined\n");
	}
}

void display(float a, float b, char operation, float result)
{
	printf("%.2f %c %.2f = %.2f\n",a ,operation ,b ,result);
}