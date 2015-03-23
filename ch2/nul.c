
/* This code is for p.29 
 * Show that the difference between NUL & NULL
 * */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define STR_SIZE 256

int main(){ 
	char *sptr = NULL;
	char *sptr2 = (char *)malloc(sizeof(char) * STR_SIZE);
	

	/* 使用 memset(sptr2 , NULL, STR_SIZE) 會出現以下訊息:
	nul.c:15:16: warning: incompatible pointer to integer conversion passing 
	'void *' to parameter of type 'int'  [-Wint-conversion]
        memset(sptr2, NULL, STR_SIZE);
                      ^~~~
	/usr/include/sys/_types/_null.h:29:15: note: expanded from macro 'NULL'
	#define NULL  __DARWIN_NULL
             	 ^~~~~~~~~~~~~
	/usr/include/sys/_types.h:52:23: note: expanded from macro '__DARWIN_NULL'
	#define __DARWIN_NULL ((void *)0)
                      	^~~~~~~~~~~
	/usr/include/secure/_string.h:77:33: note: expanded from macro 'memset'
 	 __builtin___memset_chk (dest, val, len, __darwin_obsz0 (dest))
                                	^
	nul.c:13:8: warning: unused variable 'sptr' [-Wunused-variable]
        char *sptr = NULL;
              ^
	2 warnings generated.
		 * 
	*/

//	memset(sptr2, NULL, STR_SIZE);
        memset(sptr2, 0, STR_SIZE);

	if ( *sptr2 == NUL){ 
		printf ("end\n");
	}
}
