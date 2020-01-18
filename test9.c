#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num = 520;
	const int *p=&num;
	const int *const *q = &p;
    printf("%d\n",**q);//为Void指针规定字节长度


	return 0 ;
	}
