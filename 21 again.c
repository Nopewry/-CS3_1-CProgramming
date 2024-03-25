//21 postcode (loop selection)
#include <stdio.h>
int main()
{
	int con, postcode;
	con = 1;
	while(con == 1)
	{
		printf("Enter Your PostCode : ");
		scanf("%d",&postcode);

		if( postcode == 10120 )
		{
			printf("Donmung ,Bangkok \n");
		}

		else if( postcode == 50180 )
		{
			printf("Mae Rim ,Chiangmai \n");
		}

		else if( postcode == 12110 )
		{
			printf("Thanyaburi ,Pathum Thani \n");
		}

		else if( postcode == 65000 )
		{
			printf("Muang Phitsanulok ,Phitsanulok \n");
		}

		else if( postcode == 58110 )
		{
			printf("Sop Moie ,Mae Hong Son \n");
		}

		else
		{
			printf("wrong input\n");
		}

		printf("continues ? (1 for continues) : ");
		scanf("%d", &con);
	}
}