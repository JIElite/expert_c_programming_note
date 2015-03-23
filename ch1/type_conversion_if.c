#include<stdio.h>

int array[] = { 1, 2, 3, 4, 5, 6, 7 };
#define TOTAL_ELEMENTS (sizeof(array)/sizeof(array[0]))


int main(){ 
	
	int d = -1, x;
	
	/* Solution : (int)TOTAL_ELEMENTS */
	if ( d <= TOTAL_ELEMENTS -2){ 
		printf("d <= TOTAL_ELEMENTS - 2\n");
	}
	
	return 0;
}
