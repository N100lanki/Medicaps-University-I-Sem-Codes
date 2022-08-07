#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
int a,b,c;
printf("Enter Base &   Power to Calculate :");
scanf("%d%d",&a,&b);
c=power(a,b);
printf("\nPower=%d",c);
}
int power(int a ,int b)
{
    if(b==0)
    {
     return 1;
    }

    else
     {
         return a*power(a,b-1);
     }
}
