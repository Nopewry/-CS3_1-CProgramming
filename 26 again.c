//26 global and local
#include <stdio.h>

void prove(int local);
int glo;

int main()
{
	int local;
	printf("global variable before initialize : %d\n", glo);
	printf("local variable before initialize : %d\n\n", local);

	prove(local);

	printf("\nglobal variable after initialize in another function : %d\n", glo);
	printf("local variable after initialize in another function : %d\n\n", local);
}

void prove(int local)
{
	printf("input a value in global : ");
	scanf("%d", &glo);
	printf("input a value in local : ");
	scanf("%d", &local);
	printf("\nglobal variable after initialize in prove function : %d\n", glo);
	printf("local variable after initialize in prove function : %d\n\n", local);
}