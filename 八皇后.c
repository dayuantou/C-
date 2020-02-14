#include <stdio.h>
#define max 8
int queen[8]={0},counst=0;
int check(int i, int j); 
int check(int i,int j){
	int n;
	for(n=0;n<i;n++){
		int data=queen[n];
		if(j==data){
			return 0;
		}
		if((n+data)==(i+j)){
			return 0;
		}
		if((n-data)==(i-j)){
			return 0;
		}
	} 
	return 1;
}
void Queen(int i);
void Queen(int i){
	int j;
	for(j=0;j<8;j++){
		if(check(i,j)){
			queen[i]=j;//以行为下标数组位置记录列数
			//直到最后也不冲突，证明为一个正确的摆法 
			if(i==7){
				counst++;
				queen[i]=0;
				return;
			}
			Queen(i+1);
			queen[i]=0;
		}
	}
}

int main(){
	Queen(0);
	printf("摆放的方式有%d\n种",counst);
	system("pause");
	return 0;
}
