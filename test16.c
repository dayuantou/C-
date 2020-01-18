#include <stdio.h>
// Author: http://furzoom.com/
void magic(int N);
void magic(int N)
{
    int a[N][N];
    int i;
    int col,row;
    col = (N-1)/2;
    row = 0;
 
    a[row][col] = 1;
 
    for(i = 2; i <= N*N; i++)
    {
        if((i-1)%N == 0 )
        {
            row++;
        }
        else
        {
            // if row = 0, then row = N-1, or row = row - 1
            row--;
            row = (row+N)%N;
 
            // if col = N, then col = 0, or col = col + 1
            col ++;
            col %= N;
        }
        a[row][col] = i;
    }
    for(row = 0;row<N;row++)
    {
        for(col = 0;col < N; col ++)
        {
            printf("%6d",a[row][col]);
        }
        printf("\n");
    }
}
int step(int N);
int step(int N)
{

	printf("请输入一个数：");
	scanf("%d",&N);
	if(N%2==0)
{
	printf("请输入一个奇数！\n");
	step(N);
}
	else
{
	return N;
}
}
int main()
{
	int M,N;
	M=step(N);
	magic(M);
	return 0;
}

