#include <stdio.h>
#include <stdlib.h>
int main(){
		char str[10] = "task";
		char newstr[10] = "123list123";
		printf("%p\n", newstr); 
		char strall[100] = { 0 }; //1.%s%s进行拼接 //2.%.5%s截取,只能从左边开始进行截取(起始位置-->非指针操作) 
		sprintf(strall, "%.1s%.6s", str, newstr + 3);//.从某一个地址开始从左往右进行截取(任意位置--->指针操作) // 10代表宽度 // 负号(-)代表左对齐-->负号针对于字符串的截取无效
	//	system(strall);
		printf("%s", strall); 
		system("pause"); 
		
	return 0;
}
