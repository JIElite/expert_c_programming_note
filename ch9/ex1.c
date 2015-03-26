
/*  C ���Ҿ��̣�
 *  Chapter 9, page 208
 *
 *  �@������ ���Կ��� &ca, &pa ������stack�е�λַ����print1();���нY����
 *  ��ӛ���w߀�ostack�ٽoprint2()ʹ�ã����� &ca, &pa ����һ�ӵ�ֵ
 *  ���� &ga ����� global ׃�����ǌ��H�ϵ�member address���K���ǹ̶���
 *  ���N��ԓ�]��̫���}���ڂ��farray�ofunction�ĕr�򣬌��H���ǂ��farray��һ��Ԫ�ص�
 *  address������ function �K�o��֪���@�� array�Ĵ�С�����Ҫ֪����С���ͱ���ڂ��f����
 *  �o function ��
 *
 *  ���⣬�҂����Կ��� &ga ��λַ��ԓ���� .data �^������ӛ���w��λ���ϣ���stack�Ĕ�ֵҪС�ܶ�
 *
 */

#include<stdio.h>

char ga[30];

void print1(char ca[]){ 
	printf("&ca : %d, &(ca[0]) : %d, &(ca[1]) : %d\n", &ca, &(ca[0]), &ca[1]);
	return;
}

void print2(char *pa){ 
	printf("&pa : %d, &(pa[0]) : %d, &(pa[1]) : %d, ++pa : %d\n",
			&pa, &(pa[0]), &pa[1], ++pa);
	return;
}



int main(){ 
	int i;
	char val = 'a';
	for ( i = 0; i < 26 ; i++)
	{ 
		ga[i] = val++;
	}


	printf("&ga : %d, &(ga[0]) : %d, &(ga[1]) : %d\n", 
			&ga, &(ga[0]), &(ga[1]));
	
	print1(ga);
	print2(ga);
	return 0;
}
