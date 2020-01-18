#include <stdio.h>
#include <stdlib.h>
int main()
{	
	float a[3][12]={ 
    {0,0,0,0,0,0,0,31.3,33.5,58.6,42.2,55.5},
	{59.6,32.4,12.2,34.2,44.2,52.2,42.5,24.5,34.4,32.4,24.2,45.2},
	{59.6,30.4,41.2,44.2,42.2,62.2,22.5,23.5,35.4,0,0,0}
};
	int i,j,n1,n2;
	int yearmin, yearmax,month1,month2;
    float max=a[0][0],min=a[0][7];		
    for(i=0;i<3;i++)
	{
		for(j=0;j<12;j++)
		{
			if(a[i][j]>max)
			{	max=a[i][j];
				yearmax=i;
				month1=j;}
			if(a[i][j]!=0&&a[i][j]<min)
			{	min=a[i][j];
			    yearmin=i;
				month2=j;	}		
		}
		
	}
	switch(yearmax)
	{	case 0 : n1=2014; break;
	    case 1 : n1=2015; break;
		case 2 : n1=2016; break;
	}	
	switch(yearmin)
	{	case 0 : n2=2014; break;
	    case 1 : n2=2015; break;
		case 2 : n2=2016; break;
	}	
	printf("第%d年第%d月PM最大值是%.2f\n",n1,month1+1,max);
	printf("第%d年第%d月PM最小值是%.2f\n",n2,month2+1,min);
	return 0;
}
