//29 sum 1d array
#include <stdio.h>
int main()
{
	int con, a[10], b[10], c[10], i;
	con = 1;
	while(con == 1)
	{
		for(i = 0 ; i < 10 ; i++)
		{
			a[i] = 0;
			b[i] = 0;
			c[i] = 0;
			printf("input a[%d] : ", i);
			scanf("%d", &a[i]);
			printf("input b[%d] : ", i);
			scanf("%d", &b[i]);
			c[i] = a[i] + b[i];
		}
		for(i = 0 ; i < 10 ; i++)
		{
			printf("input c[%d] = %d \n", i, c[i]);
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}