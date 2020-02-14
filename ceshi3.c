#include <stdio.h>
#include <math.h>
int sum(int x);
int sum(int x){
	int i,t=0;
	for(i=0;i<x;i++)
	{
		if(i%3==0||i%5==0){
			t=t+i;
		}
	}
	return t;
}
int main(){
	int total=sum(1000);
	printf("%d",total);
	return 0;
} 

