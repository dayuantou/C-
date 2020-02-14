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
	printf("请输入姓名：");
	scanf("%s",add->name);
	do{
		printf("请输入电话号码：");
		scanf("%s",add->num);
	}while(strlen(add->num)!=11);
}

void addPerson(address **person){
	address *temp,*add;
	add=(address *)malloc(sizeof(address));
	if(add==NULL){
		printf("内存分配失败！");
		exit(1);
	}	
	getInit(add);
	if(*person!=NULL){
		temp=*person;
		*person=add;
		add->next=temp;
	}
	else{ //第一次插入数据，将head指向该数据，然后将该数据的next指向NULL 
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
		printf("通讯录中无此人！\n"); 
	}
	else{
		do{
			printf("请输入新的号码：");
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
		printf("通讯录中无此人！\n");
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
		printf("通讯录为空！\n");
	}
	while(info!=NULL){
		printf("联系人的名字是：%s\n",info->name);
		printf("%s的手机号是：%s\n",info->name,info->num);
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
	printf("欢迎使用通讯录程序\n");
	printf("1、插入新的联系人\n");
	printf("2、查找新的联系人\n"); 
	printf("3、删除新的联系人\n"); 
	printf("4、更改当前联系人\n"); 
	printf("5、显示当前通讯录\n"); 
	printf("6、退出当前通讯录\n"); 
	while(1){
		printf("请输入要操作的步骤：");
		scanf("%d",&input);
		switch(input){
			case 1: addPerson(&head);break;
			case 2: printf("请输入要查找人的姓名：");
					scanf("%s",findpeople);
					temp=findPerson(head,findpeople);
					if(temp==NULL){
						printf("通讯录中没有此人\n");
					}
					else{
						do{
							printf("查找到的联系人是%s\n",temp->name);
							printf("%s的手机号码是：%s\n",temp->name,temp->num);
						}while((temp=findPerson(temp->next,findpeople))!=NULL);
					}
					break;
			case 3: printf("请输入要删除人的姓名：");
					scanf("%s",deletpeople);
					delPerson(&head,deletpeople);
					break;
			case 4:	printf("请输入要更改人的姓名：");
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
