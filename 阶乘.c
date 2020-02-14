#include <stdio.h>
int factorial(int num);
int factorial(int num){
	int p=0;
	if(num==1){
		return(1);
	}
	else{
		return(num*factorial(num-1)); 
	}
}
int main(){
	int i;
	for(i=1;i<=9;i++){
		printf("%dµÄ½×³ËÊÇ:%d\n",i,factorial(i));
	}

	return 0; 
}
