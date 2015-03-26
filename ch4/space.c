
/* Expert C Programming 
 *
 * Chapter : 4 
 *
 * */


#include<stdio.h>
#include<string.h>


int main(){ 
	
	/*  這個是不能修改的 ， string 相當於 配置在string pool 
	 *  不可以使用 strcpy, strcat等等，因為指標借間接存取的空間
	 *  是string pool中的某個string，已經配置好固定大小 
	 *  同樣的，不可以用 memset 去初始化它 
	 *  */
	char *str = " flgjk gk;dkg gfl;d gkdj l;klk gj";
	
	/* str2 只是在一個連續記憶體中的位址，可以利用strcat strcpy修改 
	 * 可以使用 memset 初始化 */
	char str2[] = "fjlkj fglkj dkjglj";
	
	return 0;
}
