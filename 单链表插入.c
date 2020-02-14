#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
	int value;
	struct Node *next;
}node; 
void insertNode(node **head,int value){
	node *previous; //ָ��ǰһ������ 
	node *current;  //ָ��ǰ������ 
	node *now; //ָ���²�������� 
	current = *head;
	previous=NULL;
	while(current !=NULL&&current->value<value){  //ѭ�����в��� 
		previous=current;
		current=current->next;
	}	
	now=(node *)malloc(sizeof(node));
	if(now==NULL){
		printf("�ڴ����ʧ��\n");
		exit(1); 
	}
	now->value=value;//��ֵ���²�������� 
	now->next=current;//�����ָ��ָ��ǰ������ 
	if(previous==NULL){ //���Ҫ�������һ�������� 
		*head=now;   
	}
	else{
		previous->next=now;
	}
}
void printNode(node *head){
	node *current;
	current = head;
	while(current != NULL){  //ѭ����ӡ�����ֵ 
		printf("%d ",current->value);
		current=current->next;
	} 
}
void deletNode(node **head,int value){
	node *previous;
	node *current;
	current=*head;
	previous=NULL;
	while(current!=NULL&&current->value!=value){ //ѭ���������� 
		previous=current;
		current=current->next;
	} 
	if(current==NULL){
		printf("�������޸�����\n");
		return;
	}
	else{
		if(previous==NULL){  //���Ҫɾ����Ԫ��λ��ͷָ�� 
			*head=current->next;
		}
		else{
			previous->next=current->next;
		}
		free(current);  //�ͷ��ڴ�ռ� 
	}	
}
int main(){
	node *head =NULL;
	int input;
	while(1){
		printf("������һ������(����-1��ʾ����)"); 
		scanf("%d",&input);
		if(input==-1){
			break;
		}
		insertNode(&head,input);
		printNode(head);
	}
	printf("����ɾ����...\n");
		while(1){
		printf("������Ҫɾ��������(����-1��ʾ����)"); 
		scanf("%d",&input);
		if(input==-1){
			break;
		}
		deletNode(&head,input);
		printNode(head);
	}
	return 0;
}
