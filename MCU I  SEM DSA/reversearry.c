#include<stdio.h>
#include<conio.h>
int main()
{						
	int n,i,sum=0,j,temp;		
	int arr[50];		
	printf("Enter number  %% of elements:");
	scanf("%d",&n);		
	printf("Enter the element:\n");
	for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);		//scanning all elements of array
		sum=sum+arr[i];  		//sum=sum+arr[i] doing sum of all elements in array and storing in array.
		}
	printf("Sum of the arrray is %d",sum);  //printing the sum var
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
	return 0;
}
