#include<stdio.h>
#include<stdlib.h>
#include<setjmp.h>

int (*paf())[20]{ 

	int (*pear)[20];
	pear = calloc(20, sizeof(int));
	if ( !pear ) //longjmp(error, 1);
		NULL;
	return pear;

}

int main(){ 
	
	int (*result)[20];
	result = paf();
	(*result)[3] = 12;
	
	printf("%d\n", (*result)[0]);
	printf("%d\n", (*result)[3]);

	return 0;
}
