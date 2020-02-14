#include <stdio.h> //包含标准输入输出头文件 
#include <stdlib.h> //包含转换和存储头文件 
int main() { 
int num=12345; 
char *str="12345.67";
 char array[10];
  itoa(num,array,sizeof(array)); //调用转换函数 
  printf("num=%d,array=%s\n",num,array); 
  printf("%d",atoi(str));
   getchar(); //等待键入字符 return 0;
   }
