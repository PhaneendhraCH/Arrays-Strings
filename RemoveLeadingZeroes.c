/*
Remove Leading Zeroes from String
*/

#include <stdio.h>
#include <string.h>

int main()
{
    
char *str = "000102039"; //Sample string

while(1){
    
    if (*str == '0'){
        str++;
        continue;
    }
    break;
}
printf("%s",str);
return 0;
}