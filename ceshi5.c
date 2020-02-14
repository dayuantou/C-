#include <stdio.h>
int main(){

struct Test {
  int Num;
 char *pcName; 
 short sDate; 
	char  cha[3]; 
 short sBa[4]; 
 }*p;
 printf("%d",sizeof(*p));
return 0;
}
