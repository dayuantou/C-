#include <stdio.h>
#include "generics.h"

typedef struct{
	const char *name;
	int score;
}student_t;
int cmp_student(void *a,void *b){
	if(((student_t *)a)->score > ((student_t *)b)->score) //void指针转换为结构体指针 
	return 1;
	else if(((student_t *)a)->score == ((student_t *)b)->score)
	return 0;
	else return -1;
}
int main(){
	student_t list[4]={{"TOM",84},{"Jerry",86},{"Moby",79},{"Kiryb",89}};
	student_t *plist[4]={&list[0],&list[1],&list[2],&list[3]};
	student_t *pmax=max((void **)plist,4,cmp_student);
	printf("%s的成绩最好的是%d",pmax->name,pmax->score);
	return 0;
}
