//22 wind speed (loop selection)
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

		if(speed < 0)
		{
			printf("wrong input\n");
		}

		else if(speed >= 0 && speed < 1)
		{
			printf("Calm \n");
		}

		else if(speed >= 1 && speed <= 3)
		{
			printf("Light Air \n");
		}

		else if(speed > 3 && speed <= 27)
		{
			printf("Breeze \n");
		}

		else if(speed > 27 && speed <= 47)
		{
			printf("Gale \n");
		}

		else if(speed > 47 && speed <= 63)
		{
			printf("Strom \n");
		}

		else if(speed > 63)
		{
			printf("Hurricane \n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}