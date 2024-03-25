//10 search word in sentence
#include <stdio.h>
int main()
{
	int con, pos1, pos2, i;
	char sen1, sen2, sen3, sen4, sen5, word1, word2;
	con = 1;
	while(con == 1)
	{
		printf("input sentence (5 alphabets)\n");
		printf("input alphabet 1 : ");
		scanf(" %c", &sen1);
		printf("input alphabet 2 : ");
		scanf(" %c", &sen2);
		printf("input alphabet 3 : ");
		scanf(" %c", &sen3);
		printf("input alphabet 4 : ");
		scanf(" %c", &sen4);
		printf("input alphabet 5 : ");
		scanf(" %c", &sen5);

		printf("input word do you want to search (2 alphabets)\n");
		printf("input alphabet 1 : ");
		scanf(" %c", &word1);
		printf("input alphabet 2 : ");
		scanf(" %c", &word2);

		if((word1 == sen1) && (word2 == sen2) )
		{
			pos1 = 1;
			pos2 = 2;
		}
		else if((word1 == sen2) && (word2 == sen3) )
		{
			pos1 = 2;
			pos2 = 3;
		}
		else if((word1 == sen3) && (word2 == sen4) )
		{
			pos1 = 3;
			pos2 = 4;
		}
		else if((word1 == sen4) && (word2 == sen5) )
		{
			pos1 = 4;
			pos2 = 5;
		}
		else
		{
			pos1 = 0;
			pos2 = 0;
		}

		printf("sentence is %c %c %c %c %c \n", sen1, sen2, sen3, sen4, sen5);
		printf("word is %c %c \n", word1, word2);

		if((pos1 != 0) && (pos2 != 0))
		{
			printf("word are found and first alphabet of word are at %d is %c\n", pos1, word1);
			printf("word are found and secound alphabet of word are at %d is %c\n", pos2, word2);
		}
		else
		{
			printf("word is not found\n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}