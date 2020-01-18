#include <stdio.h>
int *func(int n);
int *func(int n)
{
	n++;
	return &n;

}
int main(void)
{
   	int n,*result;
	printf("请输入一个数：");
	scanf("%d",&n);
	result=func(n);	
	printf("%d\n",*result);


	return 0;
}
