#include<stdio.h>

int main(){ 

	/* arr[x, y, z] 這種形式在某些語言是多維的陣列
	 * 但是在C中沒有這樣的寫法，但詭異的是 這居然可以編譯通過
	 * 並且他實際上取到的內容是 arr[3] 
	 *
	 * 好在現在的編譯器都十分聰明
	 * 會吐出警告訊息：
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
