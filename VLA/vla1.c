#include<stdio.h>
#include<string.h>

int main(){ 
	int len = 10;
	char array[len];
	strncpy(array, "hello", 5);

	printf("%s\n", array);

	return 0;
}
