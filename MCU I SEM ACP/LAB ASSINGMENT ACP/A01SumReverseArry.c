#include<stdio.h>
int main()
{						
	int n,i,sum=0,j,temp;		
		
	int arr[50];		
	printf("Enter number  %% of elements:");
	scanf("%d",&n);		
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		
		sum=sum+arr[i];  		
		}
	printf("Sum of the arrray is %d",sum); 
	printf("\nReverse of array is: \n");
	 i=0;
    j=n-1;
    while(i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
     for(i=0;i<n;i++)
     printf("%d ",arr[i]);
	//getch();
	return 0;
}
