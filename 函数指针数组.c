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

} //����ֵΪһ������ָ�� 
int calc(int (*select)(int,int),int a,int b){
	return select(a,b);
}//���ܺ���ָ��Ϊ�βΣ����к������� 
int main(){
	int i;
	int a,b;
	char op;
	
	int(*fpa)(int,int)=getmin; //����һ������ָ��ֱ��ָ��һ��������ַ 
	printf("%d\n",fpa(3,7));  
	int(*fparr[10])(int,int)={getmin,getmax,add,sub,mul,divv};//����һ������ָ�����飬ÿ�����������Ԫ����һ������ָ�룬ָ���Ӧ�ĺ�����ַ 
	int (**fpuu)(int,int);	
	fpuu=fparr;
	for(i=0;i<6;i++){
		printf("%d\n",(*(fpuu+i))(3,4)); 
	}
	int (*fp)(int,int);
	printf("������һ����ʽ��");
	scanf("%d%c%d",&a,&op,&b);
	fp=select(op); //����һ������ָ�룬����OPָ��ͬ�ĺ��� 
	printf("%d %c %d=%d",a,op,b,calc(fp,a,b));
	return 0;
}
