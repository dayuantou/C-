#include <stdio.h>
#include <stdlib.h>

typedef struct data{
	int *p; //ָ�뱣��������� 
	int length; //�������鳤�� 
	int stat; //0��������1�����С����2����Ӵ�С 
	int reallength;//ʵ�ʷ�����ڴ泤�� 
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
