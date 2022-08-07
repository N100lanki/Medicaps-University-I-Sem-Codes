#include<stdio.h>
#include<math.h>
#include<conio.h>
int factorial(int num)
{
    int count;
    double sum=1;
    for(count=1;count<=num;count++)
    {
        sum=sum*count;
    }
    return sum;
}
int calc(float num )
{
    int count,p,sin=-1,s,n;
    float res;
    printf("Enter value of N");
    scanf("%d",&n);
    for(count=1;count<=n;count=count+2)
    {   
         s=factorial(count);
         p=pow(num,count);
         res=res+sin*(p/s);         
         sin*=-1;
    }
    return sin; 
}
void main()
{
    int x;
    float radian, result;
    printf("Enter value of x :");
    scanf("%d",&x);
    radian=x*(3.14159/180.0);
    result=calc(radian);
    printf("value is :%f",result);
}