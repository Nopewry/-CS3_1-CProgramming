//16 wind speed
#include <stdio.h>
int main()
{
	int con;
	float speed ;
	con = 1;
	while(con == 1)
	{
		printf("Enter your speed : ");
		scanf("%f",&speed);

		while(speed < 0)
		{
			printf("wrong input\n");
			break;
		}

		while(speed >= 0 && speed < 1)
		{
			printf("Calm \n");
			break;
		}

		while(speed >= 1 && speed <= 3)
		{
			printf("Light Air \n");
			break;
		}

		while(speed > 3 && speed <= 27)
		{
			printf("Breeze \n");
			break;
		}

		while(speed > 27 && speed <= 47)
		{
			printf("Gale \n");
			break;
		}

		while(speed > 47 && speed <= 63)
		{
			printf("Strom \n");
			break;
		}

		while(speed > 63)
		{
			printf("Hurricane \n");
			break;
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}