#include <stdio.h>
#include <string.h>
void revserWords();
void revserWords()
{
	 int ret;
	
	if((ret =getchar())!='!')//判断结束是否是“！”
{	
	revserWords();
}
	else
{	printf("反向输出：");}
	putchar(ret);
}
int main()
{
//	char p[]="hello world this will be reverse!";
	printf("请输入一个以感叹号结尾的英文句子：");
	revserWords();
	putchar('\n');
	return 0;
}

