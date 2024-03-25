//32 default array 2D&3D function
#include <stdio.h>

void arr2();
void arr3();
int arr2d[10][10], arr3d[10][10][10], i, j, k, s1, s2, s3 ;

int main()
{
	int con, choice;
	con = 1;
	while(con == 1)
	{
		printf("choose an array (2 for 2D, 3 for 3D) : ");
		scanf("%d", &choice);
		if(choice == 2)
		{
			arr2();
		}
		else if (choice == 3)
		{
			arr3();
		}
		else
		{
			printf("wrong input\n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}

void arr2()
{
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
				arr2d[i][j] = 0 ;
			}
		}
		//print
		for(i = 0 ; i < s1 ; i++)
		{
			for(j = 0 ; j < s2 ; j++)
			{
				printf("Array 2D [%d][%d] = %d\n",i ,j, arr2d[i][j]);
			}
		}
	}
	else
	{
		printf("wrong input\n");
	}
}

void arr3()
{
	printf("input first slot size (not more than 10) : ");
	scanf("%d", &s1);
	printf("input secound slot size (not more than 10) : ");
	scanf("%d", &s2);
	printf("input third slot size (not more than 10) : ");
	scanf("%d", &s3);
	if((s1 > 0 && s1 <10) && (s2 > 0 && s2 < 10) && (s3 > 0 && s3 < 10))
	{
		for(i = 0 ; i <s1 ; i++)
		{
			for(j = 0 ; j < s2 ; j++)
			{
				for(k = 0 ; k < s3 ; k++)
				{
					arr3d[i][j][k] = 0 ;
				}
			}
		}
		//print
		for(i = 0 ; i <s1 ; i++)
		{
			for(j = 0 ; j < s2 ; j++)
			{
				for(k = 0 ; k < s3 ; k++)
				{
					printf("Array 3D [%d][%d][%d] = %d\n",i ,j, k, arr3d[i][j][k]);
				}
			}
		}
	}
	else
	{
		printf("wrong input\n");
	}
}
