#include "array.h"
#include <stdio.h>
void init(struct data *pdata){
	pdata->p=NULL;
	pdata->length=0; 
	pdata->stat=0;
	pdata->reallength=0;
}
void reinit(struct data *pdata){
	if(pdata->p==NULL)
	return;
	else{
		free(pdata->p);
		pdata->p=NULL;
		pdata->length=0; 
		pdata->stat=0;
		pdata->reallength=0;
	} 
} 
void addobject(struct data *pdata, int num){
	if(pdata->p==NULL)
	{
		pdata->p=(int*)malloc(sizeof(int));
		pdata->length=1;
		pdata->reallength=1;
		pdata->p[pdata->length-1]=num;
	}
	else{
		if(pdata->length==pdata->reallength){
			pdata->p=(int*)realloc(pdata->p,(pdata->length+1)*sizeof(int));
			pdata->length+=1;
			pdata->reallength+=1;
			pdata->p[pdata->length-1]=num; 
		}
	}	
}
void printfall(struct data *pdata){
	int i;
	for(i=0;i<pdata->length;i++){
		printf("%d ",pdata->p[i]);
	}
}
