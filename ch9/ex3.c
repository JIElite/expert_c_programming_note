/* page 214 
 *
 * 當 int 型別的變數為 0;
 * 以及 float 型別的變數為 0.0f 的時候，
 * 他們的 bit pattern 是一樣的
 *
 */


#include<stdio.h>

int main(){ 

	float f = 0.0f;
	int i = 0;

	if ( (float)i == f ){ 
		printf("same\n");
	}
	if ( i == (int)f ){ 
		printf("same\n");
	}


	return 0;
}
