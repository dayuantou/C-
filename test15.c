#include <stdio.h>
#include <stdlib.h>
float add(float num1,float num2);
float sub(float num1,float num2);
float mul(float num1,float num2);
float divi(float num1,float num2);
float result(float(*fp)(float,float),float,float);
float add(float num1,float num2)
{
	return num1+num2;

}
float sub(float num1,float num2)
{	return num1-num2;
}
float mul(float num1,float num2)
{	return num1*num2;
}
float divi(float num1,float num2)
{
	return num1/num2;
}
float result(float(*fp)(float,float),float num1,float num2)
{
	return (*fp)(num1,num2);
}
int main()
{
	int num1,num2;
	printf("请输入俩个数：");
	scanf("%d %d",&num1,&num2);
	printf("对这俩个数进行加减乘除的结果是：");
	printf("%.2lf %.2lf %.2lf %.2lf\n",result(add,num1,num2),result(sub,num1,num2),result(mul,num1,num2),result(divi,num1,num2));

	return 0;
}
