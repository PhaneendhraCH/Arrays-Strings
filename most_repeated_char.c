/*
	
	Find Most Occured Character in a string and display its count
	
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char most='\0',arr[50];
	int count=-1;
	int nested_count=0;
	
	printf("Enter String : ");
	scanf("%s",arr);
	
	int j=0,sub;
	
	while(arr[j]!='\0'){
		
		sub = 0;
		
		while(arr[sub]!='\0'){
			
			if(arr[sub] == arr[j]){
				
				nested_count++;

				if (nested_count>count){
					most = arr[j];
					count = nested_count;
				}
					
			}

			sub++;
		}
		nested_count = 0;
		j++;
	}
	
	printf("Most Occured char : %c and time : %d\n",most,count);
	return;
	
}
