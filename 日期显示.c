#include <stdio.h>
#include <time.h>
int main(){
	time_t startTime=clock();
	char *wday[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	time_t timep;
	struct tm *p;
	time(&timep); //得到time_t类型的UTC时间
	/*返回的字符串格式为：Www Mmm dd hh:mm:ss yyyy。
	其中Www为星期；Mmm为月份；dd为日；hh为时；mm为分；ss为秒；yyyy为年份*/ 
	printf("%s",ctime(&timep));
	p=gmtime(&timep);  //得到tm结构的UTC时间 没有经过时区转换的UTC时间
	/*返回的字符串格式为：Www Mmm dd hh:mm:ss yyyy。
	其中Www为星期；Mmm为月份；dd为日；hh为时；mm为分；ss为秒；yyyy为年份*/ 
	printf("%s",asctime(p));//将结构中的信息转换为真实世界的时间，以字符串的形式显示
	printf("%d-%d-%d",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday));
	printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);
	p=localtime(&timep);//经过时区转换的时间
	printf("%d-%d-%d",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday));
	printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);
	time_t endTime =clock();
	return 0;	
} 
