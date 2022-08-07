#include<stdio.h>
int main()
{
    int R, n;
    printf("enter number to reverse\n");
    scanf("%d",&n);
    R=reverse(n);
    printf("Reverse :%d",R);
}
int reverse(int n)
{
    int rem,i,rev ;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    return rev;
}