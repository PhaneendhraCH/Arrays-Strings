#include <stdio.h>
#define MAX 100

int delete (int a[],int n,int pos){
    
       if (pos>0 && pos<=n)
       {
           for (int j=pos-1;j<n-1;j++){
               a[j] = a[j+1];
           }
          return n-1;
       }
       else{
            printf("Forbidden \n");
            return n;
            }
   }

int main() {
    int n,pos;
    int a[MAX];
    printf("Enter the total no.of elements to be inserted \n");
    scanf("%d",&n);
    
   for (int i =0;i<n;i++){
       scanf("%d",&a[i]);
   }
   printf("Enter at which position to remove the value\n");
   scanf("%d",&pos);
   
   n=delete(a,n,pos);
   for (int z =0;z<n;z++){
       printf("%d ",a[z]);
   }
    return 0;
}