#include<stdio.h>

int main(){ 

	char (*pea)[4];
	char *apple[4];

	printf("sizeof pea : %lu\n", sizeof(pea));
	printf("sizeof apple : %lu\n", sizeof(apple));

	/* 注意 char *apple[4] 和 char (*apple)[4] 這兩種的意思完全不同
	 *
	 * char *apple[4] 是有四個元素，每個元素都是指向char的指標型態
	 * char (*pea)[4] pea 則是一個指標，只是指向的東西是 char [4] 這種東西
	 * 
	 * 所以 type of pea : char *[4]
	 *
	 */
}
