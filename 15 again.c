//15 postcode
#include <stdio.h>
int main()
{
	int con, postcode;
	con = 1;
	while(con == 1)
	{
		printf("Enter Your PostCode : ");
		scanf("%d",&postcode);

		while( postcode == 10120 )
		{
			printf("Donmung ,Bangkok \n");
			break ;
		}

		while( postcode == 50180 )
		{
			printf("Mae Rim ,Chiangmai \n");
			break ;
		}

		while( postcode == 12110 )
		{
			printf("Thanyaburi ,Pathum Thani \n");
			break ;
		}

		while( postcode == 65000 )
		{
			printf("Muang Phitsanulok ,Phitsanulok \n");
			break ;
		}

		while( postcode == 58110 )
		{
			printf("Sop Moie ,Mae Hong Son \n");
			break ;
		}

		while( postcode != 58110 && postcode != 65000 && postcode != 12110 && postcode != 50180 && postcode != 10120 )
		{
			printf("wrong input\n");
			break ;
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}