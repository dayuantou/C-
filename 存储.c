#include <stdio.h>
#include <stdlib.h>
int main(){
		char str[10] = "task";
		char newstr[10] = "123list123";
		printf("%p\n", newstr); 
		char strall[100] = { 0 }; //1.%s%s����ƴ�� //2.%.5%s��ȡ,ֻ�ܴ���߿�ʼ���н�ȡ(��ʼλ��-->��ָ�����) 
		sprintf(strall, "%.1s%.6s", str, newstr + 3);//.��ĳһ����ַ��ʼ�������ҽ��н�ȡ(����λ��--->ָ�����) // 10������ // ����(-)���������-->����������ַ����Ľ�ȡ��Ч
	//	system(strall);
		printf("%s", strall); 
		system("pause"); 
		
	return 0;
}
