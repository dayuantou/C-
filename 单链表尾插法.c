#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	book *add;
	static book *tail;//定义一个指针一直指向单链表的尾部 
	add =(book *)malloc(sizeof(book));
	if(add==NULL){
		printf("插入的位置无效");
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
book *searchBook(book *library,char *target){
	book *temp;
	temp=library;
	while(temp!=NULL){  //判断链表是否为空，如果找到满足条件的节点就返回，否则就一直寻找 
		if(!strcmp(temp->title,target)||!strcmp(temp->author,target)){ //temp->title和target相等就返回0，所以函数前加！ 
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
	book *library=NULL; //定义Library为指向链表的指针 
	book *temp1;
	char input[128];
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
	printf("请输入要查找的书籍：");
	scanf("%s",input);
	temp1=searchBook(library,input);
	if(temp1==NULL){
		printf("没有该书籍\n");
	}
	else{
		do{
			printf("已经找到符合条件的书\n");
			printBook(temp1); 
		}while((temp1=searchBook(temp1->next,input))!=NULL); //循环不断的打印多本书籍，直到链表结束 
		//temp1为找到书籍的节点，需要不断往链表后查询，打印全部符合条件的节点的数据 
	} 
	releaseLibrary(&library);
	  
	return 0;
}
