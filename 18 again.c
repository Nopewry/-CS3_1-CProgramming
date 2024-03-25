//18 less than 52 (loop selection)
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
		if(result < 52)
		{
			printf("%d is less than 52\n", result);
		}
		if(result >= 52)
		{
			printf("%d is greater than equal to 52\n", result);
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}