#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	book *add;
	static book *tail;//����һ��ָ��һֱָ�������β�� 
	add =(book *)malloc(sizeof(book));
	if(add==NULL){
		printf("�����λ����Ч");
		exit(1); 
	}
	getInit(add);
	if(*p!=NULL){
		tail->next=add; 
		add->next=NULL; 
	 
	}
	else{
		*p=add;
		add->next=NULL;
	} 
	tail=add;
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
book *searchBook(book *library,char *target){
	book *temp;
	temp=library;
	while(temp!=NULL){  //�ж������Ƿ�Ϊ�գ�����ҵ����������Ľڵ�ͷ��أ������һֱѰ�� 
		if(!strcmp(temp->title,target)||!strcmp(temp->author,target)){ //temp->title��target��Ⱦͷ���0�����Ժ���ǰ�ӣ� 
			break;
		}
		temp=temp->next;
	}
	return temp;
}
void printBook(book *temp1){
	printf("%s\n",temp1->title);
	printf("%s\n",temp1->author);
}
int main(void){
	book *library=NULL; //����LibraryΪָ�������ָ�� 
	book *temp1;
	char input[128];
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
	printf("������Ҫ���ҵ��鼮��");
	scanf("%s",input);
	temp1=searchBook(library,input);
	if(temp1==NULL){
		printf("û�и��鼮\n");
	}
	else{
		do{
			printf("�Ѿ��ҵ�������������\n");
			printBook(temp1); 
		}while((temp1=searchBook(temp1->next,input))!=NULL); //ѭ�����ϵĴ�ӡ�౾�鼮��ֱ��������� 
		//temp1Ϊ�ҵ��鼮�Ľڵ㣬��Ҫ������������ѯ����ӡȫ�����������Ľڵ������ 
	} 
	releaseLibrary(&library);
	  
	return 0;
}
