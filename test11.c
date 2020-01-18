#include <stdio.h>
void print_c();
void print_c()
{
	printf(" ######\n");
	printf("##    ##\n");
	printf("##     \n");
	printf("##    ## \n");
	printf(" ###### \n");
}
int sum(int);
int sum(int m)
{	
	int result=0;
	do{
		result+=m;

	}while(m-->0);
	
	return result;
}
int main()
{
	int n,result;
	printf("请输入n的值：");
	scanf("%d",&n);
	result=sum(n);
	printf("%d\n",result);
	return 0;
}
