#include <stdio.h>
int binary_to_ascii(unsigned int value);
int binary_to_ascii(unsigned int value){
	unsigned int quoitent;
	quoitent = value / 10;
	if(quoitent != 0){
		binary_to_ascii(quoitent);		
	}
		putchar(value%10+'0');

} 
int main(){
	unsigned int n;
	printf("请输入一个数：");
	scanf("%d",&n); 
	binary_to_ascii(n);
	
	return 0;
}
