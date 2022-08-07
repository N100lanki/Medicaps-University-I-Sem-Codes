#include<stdio.h>
#include<conio.h>
int power(int a ,int b)
{
    int i,result;
    for(i=1;i<=b;i++){
    result=result*a;}
    return result;
}
void main()
{
int a,b,c;
printf("Enter Base &   Power to Calculate :");
scanf("%d%d",&a,&b);
c=power(a,b);
printf("\nPower=%d",c);
}
