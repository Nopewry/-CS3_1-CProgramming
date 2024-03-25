//28 default array 2D&3D
#include <stdio.h>

int main()
{
	int con, arr2d[10][10], arr3d[10][10][10], i, j, k, choice, s1, s2, s3;
	con = 1;
	while(con == 1)
	{
		printf("choose an array (2 for 2D, 3 for 3D) : ");
		scanf("%d", &choice);
		if(choice == 2 || choice == 3)
		{
			printf("input first slot size (not more than 10) : ");
			scanf("%d", &s1);
			printf("input secound slot size (not more than 10) : ");
			scanf("%d", &s2);
			if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10))
			{
				if(choice == 2)
				{
					for(i = 0 ; i <s1 ; i++)
					{
						for(j = 0 ; j < s2 ; j++)
						{
							arr2d[i][j] = 0 ;
						}
					}
				}
				else if(choice == 3)
				{
					printf("input third slot size (not more than 10) : ");
					scanf("%d", &s3);
					if(s3 > 0 && s3 < 10)
					{
						for(i = 0 ; i < s1 ; i++)
						{
							for(j = 0 ; j < s2 ; j++)
							{
								for(k = 0 ; k < s3 ; k++)
								{
									arr3d[i][j][k] = 0 ;
								}
							}
						}
					}
					else
					{
						printf("wrong input\n");
					}
				}
				for(i = 0 ; i < s1 ; i++)
				{
					for(j = 0 ; j < s2 ; j++)
					{
						if(choice == 2)
						{
							printf("Array 2D [%d][%d] = %d\n",i ,j, arr2d[i][j]);
						}
						if(choice == 3)
						{
							for(k = 0 ; k < s3 ; k++)
							{
								printf("Array 3D [%d][%d][%d] = %d\n",i ,j, k, arr3d[i][j][k]);
							}
						}

					}
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