#include <stdio.h>

struct Book
{
	char title[128];
	char author[40];
	float price;
	unsigned int date;
	char publisher[40];
}book;
int main(void){
	printf("������������");
	scanf("%s",book.title);
	printf("���������ߣ�");
	scanf("%s",book.author);
	printf("�������ۼۣ�");
	scanf("%f",&book.price);//û�о��ȿ��ơ� �磺 scanf("%5.2f",&a); �ǷǷ��ġ�������ͼ�ô��������С��Ϊ2λ��ʵ��
	printf("������������ڣ�");
	scanf("%d",&book.date);
	printf("����������磺");
	scanf("%s",book.publisher); 
	
	
	printf("����:%s\n",book.title);
	printf("����:%s\n",book.author); 
	printf("�ۼ�:%.2f\n",book.price);
	printf("��������:%d\n",book.date);
	printf("������:%s\n",book.publisher);
	return 0;
}
