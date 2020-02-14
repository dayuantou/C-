#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct Address{
	char name[40];
	char num[20];
	struct Address *next;
}address;
void getInit(address *add){
	printf("������������");
	scanf("%s",add->name);
	do{
		printf("������绰���룺");
		scanf("%s",add->num);
	}while(strlen(add->num)!=11);
}

void addPerson(address **person){
	address *temp,*add;
	add=(address *)malloc(sizeof(address));
	if(add==NULL){
		printf("�ڴ����ʧ�ܣ�");
		exit(1);
	}	
	getInit(add);
	if(*person!=NULL){
		temp=*person;
		*person=add;
		add->next=temp;
	}
	else{ //��һ�β������ݣ���headָ������ݣ�Ȼ�󽫸����ݵ�nextָ��NULL 
		*person = add;
		add->next=NULL;
	}
}
address *findPerson(address *person,char *people){
	address *temp;
	temp=person;
	while(temp!=NULL){
		if(!strcmp(temp->name,people)){
			break;
		}
		temp=temp->next;
	}
	return temp;
}
void changePerson(address *person){
	address *temp;
	temp=person;
	if(temp==NULL){
		printf("ͨѶ¼���޴��ˣ�\n"); 
	}
	else{
		do{
			printf("�������µĺ��룺");
			scanf("%s",temp->num); 
		}while(strlen(temp->num)!=11);
	}
}
void delPerson(address **person,char *deletpeople){
	address *now;
	address *before;
	now=*person;
	before=NULL;
	while(now!=NULL&&abs(strcmp(now->name,deletpeople))){
		before=now;
		now=now->next;
	}
	if(now==NULL){
		printf("ͨѶ¼���޴��ˣ�\n");
		return; 
	}
	else{
		if(before==NULL){
			*person=now->next;
		}
		else{
			before->next=now->next;
		}
		free(now); 
	}
}
void displayContacts(address *person){
	address *info;
	info=person;
	if(info==NULL){
		printf("ͨѶ¼Ϊ�գ�\n");
	}
	while(info!=NULL){
		printf("��ϵ�˵������ǣ�%s\n",info->name);
		printf("%s���ֻ����ǣ�%s\n",info->name,info->num);
		info=info->next; 
	}
}
void releasePerson(address **person){
	address *temp;
	while(*person!=NULL){
		temp=*person;
		*person=(*person)->next;
		free(temp);			
	}
}
int main(void){
	address *head =NULL;
	address *temp;
	address *change;
	char findpeople[40];
	char deletpeople[40];
	char changepeople[40];
	int input; 
	printf("��ӭʹ��ͨѶ¼����\n");
	printf("1�������µ���ϵ��\n");
	printf("2�������µ���ϵ��\n"); 
	printf("3��ɾ���µ���ϵ��\n"); 
	printf("4�����ĵ�ǰ��ϵ��\n"); 
	printf("5����ʾ��ǰͨѶ¼\n"); 
	printf("6���˳���ǰͨѶ¼\n"); 
	while(1){
		printf("������Ҫ�����Ĳ��裺");
		scanf("%d",&input);
		switch(input){
			case 1: addPerson(&head);break;
			case 2: printf("������Ҫ�����˵�������");
					scanf("%s",findpeople);
					temp=findPerson(head,findpeople);
					if(temp==NULL){
						printf("ͨѶ¼��û�д���\n");
					}
					else{
						do{
							printf("���ҵ�����ϵ����%s\n",temp->name);
							printf("%s���ֻ������ǣ�%s\n",temp->name,temp->num);
						}while((temp=findPerson(temp->next,findpeople))!=NULL);
					}
					break;
			case 3: printf("������Ҫɾ���˵�������");
					scanf("%s",deletpeople);
					delPerson(&head,deletpeople);
					break;
			case 4:	printf("������Ҫ�����˵�������");
					scanf("%s",changepeople); 
					change=findPerson(head,changepeople);
					changePerson(change); 
					break;
			case 5: displayContacts(head);break;
			case 6: goto END;  
		}
	}
END :
		releasePerson(&head);
		return 0;	
}
