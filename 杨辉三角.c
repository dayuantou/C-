#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,n;
	int arr[11][11]={1};
	printf("������n��ֵ��");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		arr[i][0]=1;  //ÿһ�е�1��Ԫ�ض���ֵΪ1������1�ж�Ϊ1 
		for(j=1;j<=i;j++){
			//ÿ��Ԫ�ص�������һ����ߺ��ϱ�����Ԫ��֮�� 
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++)
		printf("%-5d",arr[i][j]);
		printf("\n");
	}
} 
