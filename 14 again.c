//14. sorting
#include<stdio.h>
int main(){
	int con, loop;
	char a, b, c, d, e, tmp;
	con = 1;
	while(con == 1){
		loop = 1;
		printf("enter 5 character (press enter between each character) : \n");
		scanf(" %c", &a);
		printf("a = %c %d\n", a, a);
		scanf(" %c", &b);
		printf("b = %c %d\n", b, b);
		scanf(" %c", &c);
		printf("c = %c %d\n", c, c);
		scanf(" %c", &d);
		printf("d = %c %d\n", d, d);
		scanf(" %c", &e);
		printf("e = %c %d\n", e, e);
		while(loop <= 5){
			while(a > b) {
				tmp = a;
				a = b ;
				b = tmp ;
				break;
			}
			while(b > c) {
				tmp = b;
				b = c ;
				c = tmp ;
				break;
			}
			while(c > d) {
				tmp = c;
				c = d ;
				d = tmp ;
				break;
			}
			while(d > e) {
				tmp = d;
				d = e ;
				e = tmp ;
				break;
			}
			loop++;
		}
		printf("after sorting : %c %c %c %c %c \n", a, b, c, d, e);
		printf("continue ? (1 for continue) : ");
		scanf("%d", &con);
	}
}
		/*
			z y x w v 0
			y x w v z 1
			x w v y z 2
			w v y x z 3
			v w y x z 4
			v w y x z 5
		*/