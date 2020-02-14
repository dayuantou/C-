#include <stdio.h>
#include <string.h> 
void main(){
	int inum =0;
	int pos=0;
	int a[10];
	int i=0;
	char *c_keyword[]={
	"while",
	"case",
	"static",
	"do",
	'\0'};
	char *c_keyword2[]={
	"while",
	"case",
	"static",
	"do",
	0};
	char *c_keyword3[]={
	"while",
	"case",
	"static",
	"do",
	NULL};
	for(i=0;c_keyword[i]!=NULL;i++){
		printf("%s\n",c_keyword[i]);
	} 
	putchar('\n');
		for(i=0;c_keyword2[i]!=NULL;i++){
		printf("%s\n",c_keyword[i]);
	} 
	putchar('\n');
		for(i=0;c_keyword3[i]!=NULL;i++){
		printf("%s\n",c_keyword[i]);
	} 
	putchar('\n');
	
}
