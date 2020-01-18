#include <stdio.h>
#include <stdlib.h>
int main()
{	
	float a[3][12]={ 
    {0,0,0,0,0,0,0,31.3,33.5,58.6,42.2,55.5},
	{59.6,32.4,42.2,34.2,44.2,52.2,42.5,24.5,34.4,32.4,24.2,45.2},
	{59.6,30.4,41.2,44.2,42.2,62.2,22.5,23.5,35.4,0,0,0}
};
	/*int i,j;
	for(i=0;i<3;i++)
	{
	for(j=0;j<12;j++)
		{
			printf("%.1lf",a[i][j]);
			printf(" ");
		}
		printf("\n");
}*/
	int n,year,month;
    printf("请输入要查询的年月份：");
    scanf("%d-%d",&year,&month);
	if(year!=2014&&year!=2015&&year!=2016)
   {printf("请输入正确的年份\n");}	
	else
	{
	switch(year)
	{
		case 2014 : n=0;  break;
		case 2015 : n=1;  break;
		case 2016 : n=2;  break;
	}
	if((int)a[n][month-1]==0)
	printf("查不到数据\n");
	else
	printf("%d年%d月广州月份的PM2.5值为%.1lf\n",year,month,a[n][month-1]);
}
	return 0;
}
