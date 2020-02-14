#include <stdio.h>
#include <string.h>
void revers(char *cs);
void revers(char *cs){
	if(*cs){
		revers(cs+1);
		putchar(*cs);
	}
} 
int main(void){

	revers("123456789");
	return 0;
}
