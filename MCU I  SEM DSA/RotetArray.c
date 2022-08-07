#include<stdio.h>
void leftrotateone(int arr[],int n);

void leftrotate(int arr[],int d,int n)
{
    int i;
    for(i=0;i<d;i++ )
    {
       leftrotateone(arr,n);
    }

}
void leftrotateone(int arr[],int n)
{
    int temp=arr[0] ,i;
     
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
        arr[n-1]=temp;

    }
}
void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("  %d",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int d=2,n=7;
    leftrotate(arr,d,n);
    print(arr,n);
    return 0;
}