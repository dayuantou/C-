#include <stdio.h>

struct Test{
	int num;
	char *pnum;
	short date;
	char cha[2];
	short def[4];
}*p;

int main(){
	printf("%d",sizeof(*p));
 return 0;
}
