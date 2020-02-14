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
		typedef int (*PTypeArray)[10]; //定义一个数组指针 
		PTypeArray myPArray;
		myPArray = &a;//&a是取整个数组的首地址，而a是这个数组第一个字节的首地址，数组指针指向一维数组，这个数组长度为10 
		(*myPArray)[0]=20;
		printf("%d\n",a[0]);
	}
	{
		int i;
		int (*MyPointer)[10];
		MyPointer = &a1;
		    printf("%d\n",MyPointer);//和a，a[0]，*(a+0)，*a，&a[0][0]是相等的
			printf("%d\n",MyPointer+1);//移动整个数组的长度即siezof(int)x10 
			printf("%d\n",*MyPointer+1);//移动一个int字节的长度 
	}
	return 0;
}
