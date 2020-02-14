#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,j,n;
	int arr[11][11]={1};
	printf("请输入n的值：");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		arr[i][0]=1;  //每一行第1个元素都赋值为1，即第1列都为1 
		for(j=1;j<=i;j++){
			//每个元素等于其上一行左边和上边两个元素之和 
			arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++)
		printf("%-5d",arr[i][j]);
		printf("\n");
	}
} 
