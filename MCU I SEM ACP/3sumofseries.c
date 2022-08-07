#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,i=1,x,n,p,f;
    printf("Enter Value of X=");
    scanf("%d",&x);
    printf("Number of Terms =:");
    scanf("%d",&n);
    while(i<=n)
    {
        f=fact(i);
        p=pow(x,i);
        sum=sum+p/f;
        i=i+2;
    }
    printf("\n The Sum Of Series=%d",sum);
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
    f=f*i;
    }
    return f;
}