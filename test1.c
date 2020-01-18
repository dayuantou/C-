#include <stdio.h>
#include <stdlib.h>
int main()
{
	char array[3][5]={
			'I','l','o','v','e',
		    'F','i','s','h','c',
			'.','c','o','m','!'
			};
	char *p;
	p=&array[1][3];
	printf("%c\n",*p);
	printf("%c\n",*p++);
	printf("%c\n",*++p);
	return 0;
}
