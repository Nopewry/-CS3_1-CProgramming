//38 address
#include <stdio.h>
int main()
{
	int con, a[10], b[10][10], c[10][10][10], *p = NULL, i, j, k, s1, s2, s3, counter, choice, address;
	con = 1;
	while(con == 1)
	{
		counter = 0;
		printf("choose an array (1 for 1D, 2 for 2D, 3 for 3D) : ");
		scanf("%d", &choice);
		if(choice == 1)
		{
			printf("input first slot size (not more than 10) : ");
			scanf("%d", &s1);
			if(s1 > 0 && s1 <10)
			{
				p = &a[0];
				for(i = 0 ; i < s1 ; i++)
				{
					a[i] = 0;
					address = p + counter;
					printf("address of a[%d] is %u\n", i, address);
					counter++;
				}
			}
			else
			{
				printf("wrong input\n");
			}
		}
		else if(choice == 2)
		{
			printf("input first slot size (not more than 10) : ");
			scanf("%d", &s1);
			printf("input secound slot size (not more than 10) : ");
			scanf("%d", &s2);
			if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10))
			{
				p = &b[0][0];
				printf("\n");
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						b[i][j] = 0;
						address = p + counter;
						printf("address of b[%d][%d] is %u\t", i, j, address);
						counter++;
					}
					printf("\n");
				}
				printf("\n");
			}
			else
			{
				printf("wrong input\n");
			}
		}
		else if (choice == 3)
		{
			printf("input first slot size (not more than 10) : ");
			scanf("%d", &s1);
			printf("input secound slot size (not more than 10) : ");
			scanf("%d", &s2);
			printf("input third slot size (not more than 10) : ");
			scanf("%d", &s3);
			if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10) && (s3 > 0 && s3 < 10))
			{
				p = &c[0][0][0];
				for(k = 0 ; k < s3 ; k++)
				{
					printf("in k layer(s) %d \n", k);
					for(i = 0 ; i < s1 ; i++)
					{
						for(j = 0 ; j < s2 ; j++)
						{
							c[i][j][k] = 0;
							address = p + counter;
							printf("address of c[%d][%d][%d] is %u\t", i, j, k, address);
							counter++;
						}
						printf("\n");
					}
					printf("\n");
				}
			}
			else
			{
				printf("wrong input\n");
			}
		}
		else
		{
			printf("wrong input\n");
		}
		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}