
#include<stdio.h>
#include<conio.h>
void main()
{ 
	int i,n,arr[100];
	printf("Enter the Size of the array\n");
	scanf("%d",&n);	//scanning the size var.	
    printf("Enter the %d elements of the array\n",n);
	for(i = 0 ; i<n;i++)
    {
		scanf("%d",&arr[i]); //scanning the array elements.
		}
	printf("The  array is\n ");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]);//printing the original array.
		}
}