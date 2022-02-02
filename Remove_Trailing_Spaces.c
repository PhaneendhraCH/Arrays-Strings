/*

	Remove the trailing erros from the right end of the string and replace the last occurence with '\0'

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  
    char str[] = "heloo there      ";
    
    char *rem;
    rem = (str + (strlen(str)-1));
    
    while (*rem == ' '){
        printf("Matched \n");
        rem--;
    }
    *(rem+1)= '\0';
    
    printf("After removing trailing erros from end : %s \n",str);
    //printf("%s %c %d %s\n",str,*rem,*rem,rem);
    
    return 0;
}
