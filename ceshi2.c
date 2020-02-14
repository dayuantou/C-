#include <stdio.h>
#include <stdlib.h>

struct Date{
	int year;
	int month;
	int day;
};
struct Book{
	char title[128];
	char author[40];
	float price;
	char publisher[128];
};
void checkDate(struct Date *date);
void checkDate(struct Date *date){
	while(date->day>31||date->month>12){
		printf("��������밴�����¸�ʽ��������xxxx-xx-xx\n");
		printf("��������ĳ�������:");
		scanf("%d-%d-%d",&date->year,&date->month,&date->day); 
	} 	
}
void getInput(struct Book *book,struct Date *date);
void getInput(struct Book *book,struct Date *date){
	printf("������������֣�");
	scanf("%s",book->title);
	printf("������������ߣ�");
	scanf("%s",book->author);
	printf("��������ļ۸�");
	scanf("%f",&book->price);
	printf("��������ĳ�������:");
	scanf("%d-%d-%d",&date->year,&date->month,&date->day);
	checkDate(date);
	printf("����������磺");
	scanf("%s",book->publisher);
}
void printBook(struct Book *book,struct Date *date);
void printBook(struct Book *book,struct Date *date){
	printf("������%s\n",book->title);
	printf("���ߣ�%s\n",book->author);
	printf("�۸�%.2f\n",book->price);
	printf("�������ڣ�%d-%d-%d\n",date->year,date->month,date->day);
	printf("�����磺%s\n",book->publisher);
}
int main(void){
	struct Book b1,b2; struct Date a1,a2;
	printf("��¼���һ��������Ϣ...\n"); 
	getInput(&b1,&a1);
	putchar('\n'); 
	printf("��¼��ڶ���������Ϣ...\n");
	getInput(&b2,&a2);
	printf("\n\n¼����ϣ����ڿ�ʼ��ӡ��֤....\n");
	printf("��ӡ��һ�������Ϣ��\n");
	printBook(&b1,&a1); 
	putchar('\n');
	printf("��ӡ�ڶ��������Ϣ��\n");
	printBook(&b2,&a2); 
	
return 0; 
}
