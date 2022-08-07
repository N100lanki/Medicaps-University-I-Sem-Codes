//WAP to Search an Element in an array.
#include<stdio.h>
int main()
{	
int i,s,temp=0;		
int arr[]={2,5,6,7,8,65,90};  
printf("Enter an element to search in array");
scanf("%d",&s);		
for(i=0;i<7;i++){	
	if(s==arr[i]){ //condition to match when the query met the array elements
	    printf("Element found at %d index",i);
	    temp=1;		
		}
		}
if(temp==0){
	printf("element not found");  //flag is zero means element not found
}
return 0 ;
}//end of main

