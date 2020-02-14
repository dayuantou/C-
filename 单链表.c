#include <stdio.h>
#include <stdlib.h>
typedef struct Book{
	char title[128];
	char author[128];
	struct Book *next;
}book;
void getInit(book *add){
	printf("请输入书名：");
	scanf("%s",add->title);
	printf("请输入作者的名字：");
	scanf("%s",add->author);
}
void addBook(book **p){ //形参传递是副本机制，所以需要2层解引用 
	book *temp, *add;
	add =(book *)malloc(sizeof(book));
	if(add==NULL){
		printf("插入的位置无效");
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
		printf("书名：%s",book1->title);
		printf("作者：%s",book1->author);
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
		printf("请问是否需要录入书籍信息？");
		do{
			ch=getchar();
		}while(ch!='Y'&&ch!='N');
		if(ch=='Y'){
			addBook(&library); //传递指针的地址 
		}
		else{
			break;
		}
	}
	printf("请问是否需要打印图书信息？");
	do{
			ch=getchar();
		}while(ch!='Y'&&ch!='N');
	 if(ch=='Y'){
	 	printLibrary(library);
	 }
	  releaseLibrary(&library);
	return 0;
}
