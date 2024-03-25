//13 prime
#include <stdio.h>
int main()
{
	int con, prime, start, end, i, j;
	con = 1;
	while(con == 1)
	{
		printf("Enter your start number : ");
		scanf("%d",&start);
		printf("Enter your end number : ");
		scanf("%d",&end);
		while(start < 0)
		{
			printf("start number can't less than zero");
			start = 0;
			break;
		}
		while(start > end)
		{
			printf("start number can't more than end number");
			break;
		}
		while(start < end)
		{
			i = start;
			while(i <= end)
			{
				prime = 0;
				j = 1 ;
				while(j <= i)
				{
					while(i%j == 0)
					{
						prime++;
						break;
					}
					j++;
				}
				while(prime == 2)
				{
					printf("prime number is %d \n", j-1);
					break;
				}
				i++;
			}
			break;
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}