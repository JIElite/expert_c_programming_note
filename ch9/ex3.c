/* page 214 
 *
 * �� int �̈́e��׃���� 0;
 * �Լ� float �̈́e��׃���� 0.0f �ĕr��
 * ������ bit pattern ��һ�ӵ�
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
