#include<stdio.h>
#include<string.h>


int main(){ 
	char *sptr1 = "hello";
	char *sptr2 = "word";
	
	printf("value of sptr1 : %d\n", (int)sptr1);

	/* error */
	strcpy(sptr1, "hdjf");	
	
	/* error */
	sptr1[3] = 'h';
	
}
