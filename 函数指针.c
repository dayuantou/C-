#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int a1[10]={1,2,3,4,5,6,7,8,9,10};
int a[10];
int main(){
	int a[10];
	{
		typedef int (myTypeArray)[10];
		myTypeArray myArray;
		myArray[0]=10;
		printf("%d\n",myArray[0]); 
	}
	{
		typedef int (*PTypeArray)[10]; //����һ������ָ�� 
		PTypeArray myPArray;
		myPArray = &a;//&a��ȡ����������׵�ַ����a����������һ���ֽڵ��׵�ַ������ָ��ָ��һά���飬������鳤��Ϊ10 
		(*myPArray)[0]=20;
		printf("%d\n",a[0]);
	}
	{
		int i;
		int (*MyPointer)[10];
		MyPointer = &a1;
		    printf("%d\n",MyPointer);//��a��a[0]��*(a+0)��*a��&a[0][0]����ȵ�
			printf("%d\n",MyPointer+1);//�ƶ���������ĳ��ȼ�siezof(int)x10 
			printf("%d\n",*MyPointer+1);//�ƶ�һ��int�ֽڵĳ��� 
	}
	return 0;
}
