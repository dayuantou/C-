#include <stdio.h>
#include <stdlib.h>
int getmin(int a,int b){
	return a<b?a : b;
}
int getmax(int a,int b){
	return a>b?a : b;
}
int add(int a,int b){
	return a+b;
} 
int sub(int a, int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int divv(int a,int b){
	return a/b;
}
int (*select(char op))(int,int){
		switch(op){
			case '+': return add;
			case '-': return sub;
			default: break;
		} 

} //返回值为一个函数指针 
int calc(int (*select)(int,int),int a,int b){
	return select(a,b);
}//接受函数指针为形参，进行函数运算 
int main(){
	int i;
	int a,b;
	char op;
	
	int(*fpa)(int,int)=getmin; //定义一个函数指针直接指向一个函数地址 
	printf("%d\n",fpa(3,7));  
	int(*fparr[10])(int,int)={getmin,getmax,add,sub,mul,divv};//定义一个函数指针数组，每个数组里面的元素是一个函数指针，指向对应的函数地址 
	int (**fpuu)(int,int);	
	fpuu=fparr;
	for(i=0;i<6;i++){
		printf("%d\n",(*(fpuu+i))(3,4)); 
	}
	int (*fp)(int,int);
	printf("请输入一个公式：");
	scanf("%d%c%d",&a,&op,&b);
	fp=select(op); //返回一个函数指针，根据OP指向不同的函数 
	printf("%d %c %d=%d",a,op,b,calc(fp,a,b));
	return 0;
}
