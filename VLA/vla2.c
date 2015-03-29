#include<stdio.h>

int main(){ 

	/* VLA 可惜的地方是沒有辦法初始化 */

	/************ Wrong ********************
	 *  const int len = 10; 
	 *  int array[len] = { 0, 1, 2, 3, 4};
	 *
	 ***************************************/
	const int len = 10;
	int array[len];
	array[1] = 5;
	printf("%d\n", array[1]);
}
