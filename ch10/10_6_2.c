#include<stdio.h>
#include<stdlib.h>

/* p.231 example2 ���c�ɻ� 
 *
 * �������Լ������ķ�ʽ
 * */

struct tag{ 
	int array[20];
} x, y;

struct tag *my_function(){ 
	struct tag *result = malloc(sizeof(struct tag));
	if ( !result ){ 
		/* processing your error */
	}
	return result;
}



int main(){ 
//	x = my_function();
	 struct tag *ptr = my_function();
	int i;
	for ( i = 0; i < 20; i++){ 
		ptr -> array[i] = i;
	}
	return 0;
}
