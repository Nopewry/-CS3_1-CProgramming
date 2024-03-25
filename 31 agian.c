//31 random and sort ascending or descending
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int con, arr3d[10][10][10], arr1d[30], i, j, k, l, s1, s2, s3, tmp, choice;
	con = 1;
	while(con == 1)
	{
		l = 0;
		printf("choose sorting type (1 for ascending, 2 for descending) : ");
		scanf("%d", &choice);
		printf("input first slot size (not more than 10) : ");
		scanf("%d", &s1);
		printf("input secound slot size (not more than 10) : ");
		scanf("%d", &s2);
		printf("input third slot size (not more than 10) : ");
		scanf("%d", &s3);
		if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10) && (s3 > 0 && s3 < 10) && (choice == 1 || choice == 2))
		{
			for(k = 0 ; k < s3 ; k++)
			{
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						arr3d[i][j][k] = 0;
						arr3d[i][j][k] = rand() % 200 + 1 ;
						arr1d[l] = arr3d[i][j][k];
						l++;
					}
				}
			}

			//print before
			printf("before sort\n");
			for(k = 0 ; k < s3 ; k++)
			{
				printf("in k layer(s) %d \n", k);
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						printf("Array 3D [%d][%d][%d] = %d \t",i ,j, k, arr3d[i][j][k]);
					}
					printf("\n");
				}
				printf("\n");
			}


			if(choice == 1)
			{
				for(i = 0 ; i < (s1 * s2 * s3) ; i++)
				{
					for(j = i + 1 ; j < (s1 * s2 * s3) ; j++)
					{
						if(arr1d[i] > arr1d[j])
						{
							tmp = arr1d[i] ;
							arr1d[i] = arr1d[j] ;
							arr1d[j] = tmp ;
						}
					}
				}
			}

			if(choice == 2)
			{
				for(i = 0 ; i < (s1 * s2 * s3) ; i++)
				{
					for(j = i + 1 ; j < (s1 * s2 * s3) ; j++)
					{
						if(arr1d[i] < arr1d[j])
						{
							tmp = arr1d[i] ;
							arr1d[i] = arr1d[j] ;
							arr1d[j] = tmp ;
						}
					}
				}
			}

			l = 0;
			for(k = 0 ; k < s3 ; k++)
			{
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						arr3d[i][j][k] = arr1d[l] ;
						l++;
					}
				}
			}

			//print after
			printf("after sort\n");
			for(k = 0 ; k < s3 ; k++)
			{
				printf("in k layer(s) %d \n", k);
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						printf("Array 3D [%d][%d][%d] = %d \t",i ,j, k, arr3d[i][j][k]);
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
		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}