#include<stdio.h>

int main(){ 

	char (*pea)[4];
	char *apple[4];

	printf("sizeof pea : %lu\n", sizeof(pea));
	printf("sizeof apple : %lu\n", sizeof(apple));

	/* ע�� char *apple[4] �� char (*apple)[4] �@�ɷN����˼��ȫ��ͬ
	 *
	 * char *apple[4] �����Ă�Ԫ�أ�ÿ��Ԫ�ض���ָ��char��ָ���͑B
	 * char (*pea)[4] pea �t��һ��ָ�ˣ�ֻ��ָ��Ė|���� char [4] �@�N�|��
	 * 
	 * ���� type of pea : char *[4]
	 *
	 */
}
