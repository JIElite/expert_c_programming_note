/* C ���Ҿ���
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
	/* r ָ����� int [5]  ���� r+1 һ�ε�׃������ sizeof(int) * 5 
	 * t ָ����� int ���� t+1 һ�ε�׃������ sizeof(int)
	 */
	printf("r : %x, r+1 : %x\n", r++, r);
	printf("t : %x, t+1 : %x\n", t++, t);
}
