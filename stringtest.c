#include <stdio.h>
#include <string.h>
int verify_passwd(char const *dest,char const *src,int len){
	int i;
	for(i=0;i<len;i++){
		printf("%d-%c\n",src[i],dest[i]);
		if(src[i]!=dest[i]-48)
		return -1;		
	}
		return 0;
	}

int main(){
	int w;
	unsigned char buf[10];
	for(int j=1;j<=6;j++){
		buf[j-1]=j;
	}
	w=verify_passwd("123456",(char *)buf,6);
	printf("%d",w);
} 


