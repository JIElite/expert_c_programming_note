#include<stdio.h>
#include<stdlib.h>

int current_element = 0;
int total_element = 5;
char *dynamic;


void add_element(char c){ 
	
	if ( current_element == total_element - 1){ 
		total_element *= 2;
		dynamic = (char *)realloc(dynamic, total_element);
		
		if ( dynamic == NULL ){ 
			/* ����ʧ�� */
			// error processing
		}

		printf("realloc success !\n");
	}
	
	current_element++;
	dynamic[current_element] = c;


}

/* �������ʧ���ĕr�򣬕�return NULL�����ԛ]���k����ȡ��ԭ����ӛ���w
 * Ҳ��˟o��ጷų����g��������ĳ�ʽ�Y��
 * ����҂�Ҫ�^�mAccessԭ���Ŀ��g��Ҫʹ�������ָ��ȥ�ӽY����
 *
 * char *tmp_ptr = (char *)realloc(dynamic, total_element);
 * if realloc success : 
 * 	dynamic = tmp_ptr;
 */


int main(){ 

	dynamic = (char *)malloc(total_element);
	FILE *fp = fopen("10_6.c", "r");
	
	while ( !feof(fp) ){ 
		char c = fgetc(fp);
		add_element(c);
	}
	
	fclose(fp);
	
	return 0;
}

