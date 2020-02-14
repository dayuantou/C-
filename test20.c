#include <stdio.h>
#include <stdlib.h>
void func(unsigned int n);
void func(unsigned int n)
	{
		int m,result;
		result = n%2;
		if(n>=2)
		{
		   m=n/2;
		   func(m);
		}
		putchar('0'+result);
}

int main()
{
	unsigned int number;
	printf("请输入一个正数：");
	scanf("%d",&number);
   	func(number);
	printf("\n");


	return 0;
}
