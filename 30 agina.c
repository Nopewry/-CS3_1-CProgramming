//30 avg 2d
#include <stdio.h>
int main()
{
	int con;
	con = 1;
	while(con == 1)
	{
		int a[10][10], b[10][10], c[10][10], i, j, s1, s2;
		float sum, avg;
		sum = 0;
		avg = 0;
		printf("input first slot size (not more than 10) : ");
		scanf("%d", &s1);
		printf("input secound slot size (not more than 10) : ");
		scanf("%d", &s2);
		if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10))
		{
			for(i = 0 ; i <s1 ; i++)
			{
				for(j = 0 ; j < s2 ; j++)
				{
					a[i][j] = 0 ;
					b[i][j] = 0 ;
					c[i][j] = 0 ;
					printf("input a[%d][%d] : ", i, j);
					scanf("%d", &a[i][j]);
					printf("input b[%d][%d] : ", i, j);
					scanf("%d", &b[i][j]);
					c[i][j] = a[i][j] * b[i][j] ;
				}
			}
			//print
			for(i = 0 ; i <s1 ; i++)
			{
				for(j = 0 ; j < s2 ; j++)
				{
					printf("c[%d][%d] = %d\n", i, j, c[i][j]);
					sum += c[i][j];
				}
			}
			avg = sum / (s1*s2);
			printf("average = %.2f\n", avg);
		}
		else
		{
			printf("wrong input\n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}