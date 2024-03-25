//25.display something
#include <stdio.h>
void display(int c1, int c2, int c3, char inp);
//void displayramid(char inp, int type);


int main()
{
	int con, choice_1, choice_2, choice_3;
	char inp;
	con = 1;
	while(con == 1)
	{
		printf("input your char : ");
		scanf(" %c", &inp);
		printf("select your choice 3 choice ( 0 for nothing )\n");
		printf("1. for in interger\n");;
		printf("2. for in base 8\n");
		printf("3. for in base 16\n");
		printf("4. for address or pointer\n");
		scanf("%d", &choice_1);
		scanf("%d", &choice_2);
		scanf("%d", &choice_3);

		display(choice_1, choice_2, choice_3, inp);

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}

}

void display(int c1, int c2, int c3, char inp)
{
	if(c1 == 1 || c2 == 1 || c3 == 1)
	{
		printf("%c in interger = %d\n", inp, inp);
	}

	if(c1 == 2 || c2 == 2 || c3 == 2)
	{
		printf("%c in base 8 = %o\n", inp, inp);
	}

	if(c1 == 3 || c2 == 3 || c3 == 3)
	{
		printf("%c in base 16 = %x\n", inp, inp);
	}

	if(c1 == 4 || c2 == 4 || c3 == 4)
	{
		printf("%c address = %p\n", inp, inp);
	}
}
