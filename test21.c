#include <stdio.h>
void quick_sort(int a[],int left,int right);
void quick_sort(int a[],int left,int right)
{
	int j=right;
	int i=left;
    int temp;
	int mid=a[(left+right)/2];
	while(i<=j)
	{
		while(a[i]<mid){i++;}
		while(a[j]>mid){j--;}
	
	if(i<=j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			 i++;
		   	 j--;
		}
	}
	if(left<j)
	 {quick_sort(a,left,j);}
	if(i<right)
	{quick_sort(a,i,right);}
}
int main()
{
	int array[]={73,108,111,118,101,70,105,115,104,67,46,99,111,109};
	int i, length;
	length=sizeof(array)/sizeof(array[0]);
	quick_sort(array,0,length-1);
	printf("排列后的数组是：");
	for(i=0;i<length;i++)
	{
	printf("%d ",array[i]);
}
	putchar('\n');
	return 0;
}
