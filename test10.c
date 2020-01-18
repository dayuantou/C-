#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0x12345678;
	char *b = (char *)&a;
	if(*b = 0x78)
	{
		printf("你的机器采用小端字节序\n");
}
	printf("0x12345678在内存中依次存放为：0x%x 0x%x 0x%x 0x%x\n",b[0],b[1],b[2],b[3]);
	return 0 ;
	}
