#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int value;
	struct Node *next;
}node; 
void insertNode(node **head,int value){
	node *previous; //指向前一个链表 
	node *current;  //指向当前的链表 
	node *now; //指向新插入的链表 
	current = *head;
	previous=NULL;
	while(current !=NULL&&current->value<value){  //循环进行插入 
		previous=current;
		current=current->next;
	}	
	now=(node *)malloc(sizeof(node));
	if(now==NULL){
		printf("内存分配失败\n");
		exit(1); 
	}
	now->value=value;//赋值给新插入的链表 
	now->next=current;//链表的指针指向当前的链表 
	if(previous==NULL){ //如果要插入的是一个空链表 
		*head=now;   
	}
	else{
		previous->next=now;
	}
}
void printNode(node *head){
	node *current;
	current = head;
	while(current != NULL){  //循环打印链表的值 
		printf("%d ",current->value);
		current=current->next;
	} 
}
void deletNode(node **head,int value){
	node *previous;
	node *current;
	current=*head;
	previous=NULL;
	while(current!=NULL&&current->value!=value){ //循环搜索链表 
		previous=current;
		current=current->next;
	} 
	if(current==NULL){
		printf("该链表无该数据\n");
		return;
	}
	else{
		if(previous==NULL){  //如果要删除的元素位于头指针 
			*head=current->next;
		}
		else{
			previous->next=current->next;
		}
		free(current);  //释放内存空间 
	}	
}
int main(){
	node *head =NULL;
	int input;
	while(1){
		printf("请输入一个数：(输入-1表示结束)"); 
		scanf("%d",&input);
		if(input==-1){
			break;
		}
		insertNode(&head,input);
		printNode(head);
	}
	printf("测试删除数...\n");
		while(1){
		printf("请输入要删除的数：(输入-1表示结束)"); 
		scanf("%d",&input);
		if(input==-1){
			break;
		}
		deletNode(&head,input);
		printNode(head);
	}
	return 0;
}
