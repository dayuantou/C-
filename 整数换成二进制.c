#include <stdio.h>
void IntToBinary(unsigned int num);
void IntToBinary(unsigned int num){
	int i = num % 2;
	if(num>1){
		IntToBinary(num/2);
	}
	putchar('0'+i);
}
int main(){
	int n;
	while(1){
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	IntToBinary(n);
	}
	return 0;
}
