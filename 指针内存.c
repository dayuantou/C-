#include <stdio.h>
struct Test
 { int Num; 
   char *pcName; 
   int sDate; 
   char cha[2]; 
   int sBa[3]; }d;  
int main(){
	
   char a=0,b=0;
   int *p =(int *)&b;
   *p=258;
  
   printf("%d %d\n",a,b);

printf("%d",sizeof(d)); 

	return 0;
}
