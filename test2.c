#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{	
	char a[1024];
	int i,j,n,m;
	printf("请输入任意数：");
	scanf("%s",a);  //输入数组不能加“&”符号
    m = strlen(a);  //求出数组中字符的个数
	n = sqrt(m);  //求平均值 ，编译加-lm
	char (*p)[n]=(char(*)[n])&a;
	for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{	
		printf("%c",p[i][j]);
		printf(" ");
	}
	printf("\n");
}
	return 0;
	}
