
/* Expert C Programming 
 *
 * Chapter : 4 
 *
 * */


#include<stdio.h>
#include<string.h>


int main(){ 
	
	/*  �@���ǲ����޸ĵ� �� string �ஔ� ������string pool 
	 *  ������ʹ�� strcpy, strcat�ȵȣ����ָ�˽��g�Ӵ�ȡ�Ŀ��g
	 *  ��string pool�е�ĳ��string���ѽ����úù̶���С 
	 *  ͬ�ӵģ��������� memset ȥ��ʼ���� 
	 *  */
	char *str = " flgjk gk;dkg gfl;d gkdj l;klk gj";
	
	/* str2 ֻ����һ���B�mӛ���w�е�λַ����������strcat strcpy�޸� 
	 * ����ʹ�� memset ��ʼ�� */
	char str2[] = "fjlkj fglkj dkjglj";
	
	return 0;
}
