//17 flight
#include <stdio.h>
int main()
{
	int con, choice, time;
	con = 1;
	while(con == 1)
	{
		printf("select flight (1 for departure ,2 for arrival)");
		scanf(" %d",&choice);
		while(choice == 1)
		{
			printf("select departure time\n 1.08:00 AM\n 2.09:43 AM\n 3.11:19 AM\n 4.12:47 PM\n 5.02:00 PM\n 6.03:45 PM \n");
			scanf("%d",&time);

				while (time == 1 )
				{
					printf("Arrival Time is 10:16 AM \n");
					break;
				}
				while (time == 2 )
				{
					printf("Arrival Time is 11:52 AM \n");
					break;
				}
				while (time == 3 )
				{
					printf("Arrival Time is 01:31 PM \n");
					break;
				}
				while (time == 4 )
				{
					printf("Arrival Time is 03:00 PM \n");
					break;
				}
				while (time == 5 )
				{
					printf("Arrival Time is 04:08 PM \n");
					break;
				}
				while (time == 6 )
				{
					printf("Arrival Time is 05:55 AM \n");
					break;
				}
				while(time < 1 || time > 6 )
				{
					printf("wrong input\n");
					break;
				}
			break;
		}
		while(choice == 2)
		{

			printf("Select Arrival Time\n 1.10:16 AM\n 2.11:52 AM\n 3.01:31 PM\n 4.03:00 PM\n 5.04:08 PM\n 6.05:55 PM \n");
			scanf("%d",&time);

				while (time == 1 )
				{
					printf("Departure Time is 08:00 AM \n");
					break;
				}
				while (time == 2 )
				{
					printf("Departure Time is 09:43 AM \n");
					break;
				}
				while (time == 3 )
				{
					printf("Departure Time is 11:19 PM \n");
					break;
				}
				while (time == 4 )
				{
					printf("Departure Time is 12:47 PM \n");
					break;
				}
				while (time == 5 )
				{
					printf("Departure Time is 02:00 PM \n");
					break;
				}
				while (time == 6 )
				{
					printf("Departure Time is 03:45 AM \n");
					break;
				}
				while(time < 1 || time > 6 )
				{
					printf("wrong input\n");
					break;
				}
			break;
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}