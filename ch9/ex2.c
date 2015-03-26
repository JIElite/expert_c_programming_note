/* C 專家編程
 *
 * Chapter 9
 * This exercise is at page 213
 *
 */

#include<stdio.h>

int main(){ 

	int apricot[2][3][5];
	int (*r)[5] = apricot[0];
	int *t = apricot[0][0];
	/* r 指向的是 int [5]  所以 r+1 一次的變量就是 sizeof(int) * 5 
	 * t 指向的事 int 所以 t+1 一次的變量就是 sizeof(int)
	 */
	printf("r : %x, r+1 : %x\n", r++, r);
	printf("t : %x, t+1 : %x\n", t++, t);
}
