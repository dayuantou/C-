#include <stdio.h>
#include <time.h>
int main(){
	time_t startTime=clock();
	char *wday[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	time_t timep;
	struct tm *p;
	time(&timep); //�õ�time_t���͵�UTCʱ��
	/*���ص��ַ�����ʽΪ��Www Mmm dd hh:mm:ss yyyy��
	����WwwΪ���ڣ�MmmΪ�·ݣ�ddΪ�գ�hhΪʱ��mmΪ�֣�ssΪ�룻yyyyΪ���*/ 
	printf("%s",ctime(&timep));
	p=gmtime(&timep);  //�õ�tm�ṹ��UTCʱ�� û�о���ʱ��ת����UTCʱ��
	/*���ص��ַ�����ʽΪ��Www Mmm dd hh:mm:ss yyyy��
	����WwwΪ���ڣ�MmmΪ�·ݣ�ddΪ�գ�hhΪʱ��mmΪ�֣�ssΪ�룻yyyyΪ���*/ 
	printf("%s",asctime(p));//���ṹ�е���Ϣת��Ϊ��ʵ�����ʱ�䣬���ַ�������ʽ��ʾ
	printf("%d-%d-%d",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday));
	printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);
	p=localtime(&timep);//����ʱ��ת����ʱ��
	printf("%d-%d-%d",(1900+p->tm_year),(1+p->tm_mon),(p->tm_mday));
	printf("%s %d:%d:%d\n",wday[p->tm_wday],p->tm_hour,p->tm_min,p->tm_sec);
	time_t endTime =clock();
	return 0;	
} 
