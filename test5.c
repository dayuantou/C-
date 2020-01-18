#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *a[4]={
				"Hello!",
				"How are you?",
				"Fine,thank you, and you?",
				"I am fine too"
};
	int i;
	char *(*p)[4]=&a;
	for(i=0;i<4;i++)
	{
	printf("%s\n",(*p)[i]);
}
	return 0;
}
