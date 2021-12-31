/*


	C Program on Return a String from a function

*/

#include <stdio.h>
#include <stdlib.h>

char *string_return(){

	// Here the string is stored in Heap Area (not in the stack area)
	char *a = malloc(100);
	printf("Enter a string : ");
	scanf("%s",a);
	printf("%s\n",a);
	return a;
}

int main(){
	char *p;
	//p = string_return();
	printf("String Returned from a is :%s\n",string_return());
	return 0;
}
