#include <stdio.h>
#include <stdlib.h>

typedef struct data{
	int *p; //指针保留数组起点 
	int length; //保存数组长度 
	int stat; //0代表无序，1代表从小到大，2代表从大到小 
	int reallength;//实际分配的内存长度 
}Data;
struct findres{
	int **p;
	int n;
}; 
void init(Data *pdata);
void reinit(Data *pdata);
void addobject(Data *pdata,int num);
void addobjects(Data *pdata,int *pnum,int n);
void printfall(Data *pdata);
int *finddata(Data *pdata,int num);
void sort(Data *pdata,int obj);
void change(Data *pdata,int oldnum,int newnum);
void deletone(Data *pdata,int num);
void deletall(Data *pdata,int num); 
struct findres findadlldata(Data *pdata,int num);
void insert(Data *pdata,int num,int insertnum,int headback);
