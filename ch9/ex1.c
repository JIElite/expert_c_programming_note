
/*  C 專家編程：
 *  Chapter 9, page 208
 *
 *  這個例子 可以看到 &ca, &pa 是利用stack中的位址，當print1();執行結束後
 *  將記憶體還給stack再給print2()使用，所以 &ca, &pa 會是一樣的值
 *  而在 &ga 因為是 global 變數，是實際上的member address，並且是固定的
 *  其餘應該沒有太大問題。在傳遞array給function的時候，實際上是傳遞array第一個元素的
 *  address，所以 function 並無法知道這個 array的大小，如果要知道大小，就必須在傳遞參數
 *  給 function 。
 *
 *  此外，我們可以看到 &ga 的位址應該是在 .data 區所以在記憶體的位置上，比stack的數值要小很多
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
