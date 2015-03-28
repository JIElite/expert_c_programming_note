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
			/* 配置失敗 */
			// error processing
		}

		printf("realloc success !\n");
	}
	
	current_element++;
	dynamic[current_element] = c;


}

/* 因為配置失敗的時候，會return NULL，所以沒有辦法存取到原本得記憶體
 * 也因此無法釋放出空間，除非你的程式結束
 * 如果我們要繼續Access原本的空間就要使用另外的指標去接結果：
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

