//12 less than 52
#include <stdio.h>
int main()
{
	int con, fs, sd, result;
	con = 1;
	while(con == 1)
	{
		printf("Enter your first number : ");
		scanf("%d",&fs);
		printf("Enter your secound number : ");
		scanf("%d",&sd);
		result = fs + sd;
		while(result < 52)
		{
			printf("%d is less than 52\n", result);
			break;
		}
		while(result >= 52)
		{
			printf("%d is greater than equal to 52\n", result);
			break;
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}

/*
#include <stdio.h>
int main()
{
	int con;
	con = 1;
	while(con == 1)
	{

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}
*/