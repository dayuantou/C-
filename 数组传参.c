#include <stdio.h>
#include <string.h>
#define DIM(a)(sizeof(a)/sizeof(*a))
int searcheKeyTable( char **table,const int size,const char *key,int *pos);//µÈ¼ÛÓÚchar *table[] 
int searcheKeyTable( char **table,const int size,const char *key,int *pos){
	int rv =0;
	int i=0;
	int inum=0;
	if(table==NULL || key==NULL || pos==NULL){
		rv = -1;
		printf("func searcheKeyTable:%d",rv);
		return rv;
	}
	inum = (sizeof(table)/sizeof(*table));
	for(i=0;i<size;i++){
		if(strcmp(key,*(table+i))==0){
			*pos = i;
			return rv;
		}
	}
	if(i==size){
	*pos=-1; 
} 
	return rv;
}
int main(){
	int inum =0;
	int pos=0;
	int a[10];
	int i=0;
	char* c_keyword[]={
		"while",
		"case",
		"static",
		"do"
	};
	searcheKeyTable(c_keyword,DIM(c_keyword),"do",&pos);
	printf("pos:%d\n",pos);
	searcheKeyTable(c_keyword,DIM(c_keyword),"static",&pos);
	printf("pos:%d\n",pos);
	return 0;
} 
