//11 direction of robot
#include <stdio.h>
int main()
{
	int con, x, y, distance, sum_distance;
	con = 1;
	sum_distance = 0;
	while(con == 1)
	{
		printf("input your x axis (0, 1, -1) : ");
		scanf("%d", &x);
		printf("input your y axis (0, 1, -1) : ");
		scanf("%d", &y);
		printf("input your distance : ");
		scanf("%d", &distance);

		if(x == 0 && y == 1)
		{
			printf("North with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == 0 && y == 1)
		{
			printf("North with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == 0 && y == -1)
		{
			printf("South with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == 1 && y == 0)
		{
			printf("East with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == -1 && y == 0)
		{
			printf("West with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == 1 && y == 1)
		{
			printf("Northwest with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == 1 && y == -1)
		{
			printf("Southeast with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else if(x == -1 && y == -1)
		{
			printf("Southwest with %d distance\n", distance);
			sum_distance += distance;
			printf("sum distance = %d\n", sum_distance);
		}
		else
		{
			printf("wrong input\n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}