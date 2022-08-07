#include<stdio.h>
void main()
{
    int total,a=-1,b=1,n,i;
    printf("Eneter Terms to Be Calculate Sum:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     {
         total=a+b;
         a=b;
         b=total;
     }
    printf("Total =%d",total);

}