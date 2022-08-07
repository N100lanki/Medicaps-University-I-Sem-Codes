#include<stdio.h>
#include<conio.h>
int main()
{						
	int n,i,sum=0,j,temp;		
	int arr[50];		
	printf("Enter number of elements:");
	scanf("%d",&n);		
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		
		}

     for(i=0;i<n;i++){
        if(arr[i]%2==0)
            printf("\na[%d] = %d is even.",i,arr[i]);
            else
                printf("\na[%d] = %d is odd.",i,arr[i]);
     }
	return 0;
}
