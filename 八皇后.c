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
			queen[i]=j;//����Ϊ�±�����λ�ü�¼����
			//ֱ�����Ҳ����ͻ��֤��Ϊһ����ȷ�İڷ� 
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
	printf("�ڷŵķ�ʽ��%d\n��",counst);
	system("pause");
	return 0;
}
