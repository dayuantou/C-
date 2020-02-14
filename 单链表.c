#include <stdio.h>
#include <stdlib.h>
typedef struct Book{
	char title[128];
	char author[128];
	struct Book *next;
}book;
void getInit(book *add){
	printf("������������");
	scanf("%s",add->title);
	printf("���������ߵ����֣�");
	scanf("%s",add->author);
}
void addBook(book **p){ //�βδ����Ǹ������ƣ�������Ҫ2������� 
	book *temp, *add;
	add =(book *)malloc(sizeof(book));
	if(add==NULL){
		printf("�����λ����Ч");
		exit(1); 
	}
	getInit(add);
	if(*p!=NULL){
		temp=*p;
		*p=add;
		add->next=temp;
	}
	else{
		*p=add;
		add->next=NULL;
	} 
}
void printLibrary(book *library){
	book *book1;
	int count =1;
	book1=library;
	while(book1!=NULL){
		printf("Book%d",count);
		printf("������%s",book1->title);
		printf("���ߣ�%s",book1->author);
		book1=book1->next;
		count++;
	} 
} 
void releaseLibrary(book **library){
	book *temp;
	while(*library!=NULL){
		temp=*library;
		*library=(*library)->next;
		free(temp);			
	}
}
int main(void){
	book *library=NULL;
	char ch; 
	while(1){
		printf("�����Ƿ���Ҫ¼���鼮��Ϣ��");
		do{
			ch=getchar();
		}while(ch!='Y'&&ch!='N');
		if(ch=='Y'){
			addBook(&library); //����ָ��ĵ�ַ 
		}
		else{
			break;
		}
	}
	printf("�����Ƿ���Ҫ��ӡͼ����Ϣ��");
	do{
			ch=getchar();
		}while(ch!='Y'&&ch!='N');
	 if(ch=='Y'){
	 	printLibrary(library);
	 }
	  releaseLibrary(&library);
	return 0;
}
