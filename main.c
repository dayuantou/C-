#include "array.h"

#include <stdlib.h>
#include <stdio.h>
int main(){
	Data data1;
//	int a[10] = {231, 112, 1233, 14123, 523, 112, 71, 18, 29, 112};
	addobject(&data1, 10);
	addobject(&data1, 11);
	addobject(&data1, 12);
	addobject(&data1, 13);
	printfall(&data1);
	return 0;
}
