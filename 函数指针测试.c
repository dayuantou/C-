#include <stdio.h>
int add(int a, int b);
int add(int a, int b){
	printf("func add ....\n");
	return a+b;
}

void main(){
	add(1,2);
	{
		typedef int (MyFuncType)(int a,int b);//定义一个类型 
		MyFuncType *myPointerFunc = NULL;//定义一个指针，指向某一种类的函数 
		myPointerFunc=&add;
	//	myPointerFunc(3,4);	
		printf("%d\n",myPointerFunc(3,4));
	}
	{
		typedef int (*MyPointerFuncType)(int a,int b);//定义一个函数指针类型 
		 MyPointerFuncType myPonterFunc;//定义一个指针 
		 myPonterFunc=add;
	//	 myPonterFunc(5,6);
		 printf("%d\n",myPonterFunc(5,6));
	} 
	{
		int (*MyPonterFunc)(int a,int b);//定义一个变量 
		 MyPonterFunc=add;
	//	 MyPonterFunc(7,8); 
		  printf("%d\n",MyPonterFunc(7,9));
	}
	system("pause"); 
}
