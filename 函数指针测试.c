#include <stdio.h>
int add(int a, int b);
int add(int a, int b){
	printf("func add ....\n");
	return a+b;
}

void main(){
	add(1,2);
	{
		typedef int (MyFuncType)(int a,int b);//����һ������ 
		MyFuncType *myPointerFunc = NULL;//����һ��ָ�룬ָ��ĳһ����ĺ��� 
		myPointerFunc=&add;
	//	myPointerFunc(3,4);	
		printf("%d\n",myPointerFunc(3,4));
	}
	{
		typedef int (*MyPointerFuncType)(int a,int b);//����һ������ָ������ 
		 MyPointerFuncType myPonterFunc;//����һ��ָ�� 
		 myPonterFunc=add;
	//	 myPonterFunc(5,6);
		 printf("%d\n",myPonterFunc(5,6));
	} 
	{
		int (*MyPonterFunc)(int a,int b);//����һ������ 
		 MyPonterFunc=add;
	//	 MyPonterFunc(7,8); 
		  printf("%d\n",MyPonterFunc(7,9));
	}
	system("pause"); 
}
