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
		printf("输入错误，请按照以下格式重新输入xxxx-xx-xx\n");
		printf("请输入书的出版日期:");
		scanf("%d-%d-%d",&date->year,&date->month,&date->day); 
	} 	
}
void getInput(struct Book *book,struct Date *date);
void getInput(struct Book *book,struct Date *date){
	printf("请输入书的名字：");
	scanf("%s",book->title);
	printf("请输入书的作者：");
	scanf("%s",book->author);
	printf("请输入书的价格：");
	scanf("%f",&book->price);
	printf("请输入书的出版日期:");
	scanf("%d-%d-%d",&date->year,&date->month,&date->day);
	checkDate(date);
	printf("请输入出版社：");
	scanf("%s",book->publisher);
}
void printBook(struct Book *book,struct Date *date);
void printBook(struct Book *book,struct Date *date){
	printf("书名：%s\n",book->title);
	printf("作者：%s\n",book->author);
	printf("价格：%.2f\n",book->price);
	printf("出版日期：%d-%d-%d\n",date->year,date->month,date->day);
	printf("出版社：%s\n",book->publisher);
}
int main(void){
	struct Book b1,b2; struct Date a1,a2;
	printf("请录入第一本数的信息...\n"); 
	getInput(&b1,&a1);
	putchar('\n'); 
	printf("请录入第二本数的信息...\n");
	getInput(&b2,&a2);
	printf("\n\n录入完毕，现在开始打印验证....\n");
	printf("打印第一本书的信息：\n");
	printBook(&b1,&a1); 
	putchar('\n');
	printf("打印第二本书的信息：\n");
	printBook(&b2,&a2); 
	
return 0; 
}
