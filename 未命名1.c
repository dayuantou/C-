#include <stdio.h>
int main(){
	char c1,c2;
	printf("请输入第一个字符："); 
	scanf("%c",&c1);
	fflush(stdin); //清空输入缓存区 
	printf("%c\n",c1);
	printf("请输入第二个字符："); 
	scanf("%c",&c2);
	printf("%c\n",c2);
} 
