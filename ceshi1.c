#include <stdio.h>
void (*array[3])(void); //指针数组，指针为函数指针，形参是void,返回值是void. 
void funcA(void){
	printf("I am funcA");
} 
void funcB(void){
	printf("I am funcB");
}
void funcC(void){
	printf("I am funcC");
}
int main(void){
	array[0]=funcA;
	array[1]=funcB;
	array[2]=funcC;
	array[0]();
	array[1]();
	array[2]();
	return 0;
}
