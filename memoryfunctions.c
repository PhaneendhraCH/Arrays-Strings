#include <stdio.h>
#include <string.h>

int main () {
    char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   
   strcpy(dest,"Heloooo!!");
    printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 3);    // over lapping wont happen
    printf("Before memcpy dest = %s\n\n", dest);
    
   strcpy(dest,"Heloooo!!");
   printf("Before memmove dest = %s\n", dest);
   memmove(dest, src, 3); //overlapping will happen in memmove
   printf("After memmove dest = %s\n\n", dest);
   
   strcpy(dest,"Heloooo!!");
   printf("Before memset dest = %s\n", dest);
   memset(dest, src[0], 3); // sets src[0] until n-1(3) indices
   printf("After memmove dest = %s\n", dest);

   return 0;
}

/*
Output :

Before memcpy dest = Heloooo!!
Before memcpy dest = httoooo!!

Before memmove dest = Heloooo!!
After memmove dest = httoooo!!

Before memset dest = Heloooo!!
After memmove dest = hhhoooo!!
*/