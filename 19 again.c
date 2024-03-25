//19 prime (loop selection)
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
		if(start < 0)
		{
			printf("start number can't less than zero");
			start = 0;
		}
		else if(start > end)
		{
			printf("start number can't more than end number");
		}
		else
		{
			for(i = start ; i <= end ; i++)
			{
				prime = 0;
				for(j = 1 ; j <= i ; j++)
				{
					if(i%j == 0)
					{
						prime++;
					}
				}
				if(prime == 2)
				{
					printf("prime number is %d \n", j-1);
				}
			}
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}