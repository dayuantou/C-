#include <stdio.h>

unsigned int Fib(int n);
unsigned int Fib(int n)
{
	int i;
	int num1=1;
	int num2=1;
	int tmp=0;
	if(n<2)
	{return 1;}
   else
	{
		for(i=0;i<=n-2;i++)
		{
			tmp=num1+num2;
			num1=num2;
			num2=tmp;			
		}
		return tmp;
	}
}
int main()
{
	int i,n;
	printf("请输入一个整数：");
	scanf("%d",&n);
    printf("斐波那契数列的前%d个数字是：", n);
	for(i=0;i<n;i++)
	{
	  printf("%d\t",Fib(i)); 
}
	printf("\n");
	return 0;
}


