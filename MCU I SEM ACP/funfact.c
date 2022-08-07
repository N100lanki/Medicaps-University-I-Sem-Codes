#include<conio.h>
#include<stdio.h>
void main()
{
    int factorial,num;
    printf("Enter Number To Find Factorial");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial Of The Number :%d is %d ",num,factorial);
}
int fact(int n)
 {
    int i ,f=1;
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
    return f;
 }