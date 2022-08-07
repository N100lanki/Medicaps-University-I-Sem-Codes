//WAP to Search an Element in an array.
#include<stdio.h>
int main(){		//start of main
int i,s,temp=0;		//declaring the required vars
int size, arr[10];   //initialize array	//clearing the last output
printf("Enter Size of the array: up to 10:\t");
scanf("%d",&size);
printf("Enter %d elements of array:\n",size);
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
printf("Enter an element to search in array");
scanf("%d",&s);		//scanning the element to search
for(i=0;i<size;i++){		//loop to traverse array
	if(s==arr[i]){ //condition to match when the query met the array elements
	    printf("Element found at %d index",i+1);
	    temp=1;		//flag to check that condition is met or not
		}
		}
if(temp==0){
	printf("element not found");  //flag is zero means element not found
}

getch();
return 0 ;
}//end of main

