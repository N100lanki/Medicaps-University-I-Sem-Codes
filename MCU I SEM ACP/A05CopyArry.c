#include<stdio.h>
int main()
{						
	int n,i,sum=0,j,temp;		
	int arr[50],brr[50];		
	printf("Enter number of elements:");
	scanf("%d",&n);		
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);	
        	}
        	printf("1st Array is :\n");
        	for(i=0;i<n;i++)
		{
		printf("%d ",arr[i]);
        	}


        for(i=0;i<n;i++){
            brr[i]=arr[i];
        }
        		printf("\n\n2nd Array is :\n");
        	for(i=0;i<n;i++)
		{
		printf("%d ",brr[i]);
        	}

}
