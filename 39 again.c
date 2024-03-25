#include <stdio.h>

void swap();
int a[10], b[10] ;

int main()
{
	int con,  i, s1;
	con = 1;
	while(con == 1)
	{
		printf("input first slot size (not more than 10) : ");
		scanf("%d", &s1);
		for(i = 0 ; i < s1 ; i++)
		{
			printf("input a[%d] : ", i);
			scanf("%d", a[i]);
			printf("input b[%d] : ", i);
			scanf("%d", b[i]);
			swap();
		}
		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}

void swap()
{
	int p1, p2;
}