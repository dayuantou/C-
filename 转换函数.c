#include <stdio.h> //������׼�������ͷ�ļ� 
#include <stdlib.h> //����ת���ʹ洢ͷ�ļ� 
int main() { 
int num=12345; 
char *str="12345.67";
 char array[10];
  itoa(num,array,sizeof(array)); //����ת������ 
  printf("num=%d,array=%s\n",num,array); 
  printf("%d",atoi(str));
   getchar(); //�ȴ������ַ� return 0;
   }
