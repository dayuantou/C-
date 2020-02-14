#include <stdio.h>
int main(){
	long a=0,b=1,c,sum=0;
	while(c<4000000){
		if(b%2==0)
		sum+=b;
		c=a+b;
		a=b;
		b=c;}
	printf("%ld",sum);
	return 0;
} 
