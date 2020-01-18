#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

	char a[1024];
	char *p=a, *s=a;
	int i,n=0;
	printf("请输入一个英文的句子：");
	gets(a);
	while(*p!='\0'&&*p==' ')p++,n++;
	while(*p!='\0')*s++=*p++;
	//printf("%d\n",strlen(a)-n);
	int j=strlen(a)-n;
	char *d=a;
	for(i=0;i<j;i++)
	{
	 if(*(d+i)==' '&&*(d+i+1)!=' '&&*(d+i+1)!='\0')
		*(d+i)='\n';
	}
	*(d+i)='\0';
	puts(a);

	return 0;
}
