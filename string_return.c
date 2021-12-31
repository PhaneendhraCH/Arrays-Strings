/*


	C Program on Return a String from a function

*/

#include <stdio.h>
#include <stdlib.h>

char *string_return(){

	// here the string is stored in data segment
	// Data segment consists of Global and Static Varaibles and can be accessed thorugh out the program
	
	static char a[100];
	
	//char *a;
	puts("Enter a string : ");
	scanf("%[^\n]s",a);
	printf("%s\n",a);
	return a;
}

int main(){
	char *p;
	p = string_return();
	printf("String Returned from a is :%s\n",p);
	return 0;
}
