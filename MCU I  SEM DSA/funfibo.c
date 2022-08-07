#include<stdio.h>
int fibo(int n)
{
    int total,a=-1,b=1,i;
     for(i=1;i<=n;i++)
     {
         total=a+b;
         a=b;
         b=total;
         printf("%d",total);
     }
     return total;
}
void main()
{
    int n;
    printf("Eneter Terms to Be Calculate Sum:");
    scanf("%d",&n);
    printf("Total =%d",fibo(n));
}