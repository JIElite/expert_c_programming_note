#include<stdio.h>

int main(){ 

	/* arr[x, y, z] �@�N��ʽ��ĳЩ�Z���Ƕ�S�����
	 * ������C�Л]���@�ӵČ�������Ԏ������ �@��Ȼ���Ծ��gͨ�^
	 * �K�������H��ȡ���ă����� arr[3] 
	 *
	 * ���ڬF�ڵľ��g����ʮ����
	 * ���³�����ӍϢ��
	 *
	 *	/Users/jielite/expert_c_programming_note/ch9/multi_arr.c:10:21: warning: expression result unused [-Wunused-value]
         *		printf("%d\n", arr[1,2,3]);
         *              		   ^
	 *	/Users/jielite/expert_c_programming_note/ch9/multi_arr.c:10:23: warning: expression result unused [-Wunused-value]
         *		printf("%d\n", arr[1,2,3]);
         *      		             ^
	 *	2 warnings generated.
         *
	 */

	int arr[] = { 0, 1, 2, 3, 4};
	printf("%d\n", arr[1,2,3]);
	
	return 0;
}
