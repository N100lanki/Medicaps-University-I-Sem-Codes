#include<stdio.h>
int main()
{ 
	int x,i,n,arr[100]={0},pos;
	printf("Enter the Size of the array\n");
	scanf("%d",&n);	
		printf("Enter the %d elements of the array\n",n);
	for(i = 0 ; i<n;i++){
		scanf("%d",&arr[i]); 
		}
	printf("The Original array is\n ");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]);
		}
	printf("\nEnter the position of new element");
	scanf("%d",&pos);
	printf("Enter the new element");
	scanf("%d",&x);
	n++; 
	for(i=n-1;i>=pos-1;i--){
	    arr[i]=arr[i-1];
		 }
	arr[pos-1]=x;
	 printf("the modified array is \n");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]);
		}

		printf("\nEnter the place to remove element : ");
		scanf("%d",&pos);

		for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
		}
		n--;
		 printf("the modified array is \n");
	for ( i =0 ; i <n;i++){
		printf("%d ",arr[i]); 
		}

	return 0;
} 
