#include<stdio.h>
void main()
{
    int first,second,*p,*q ,sum;
    printf("Enter two integers to Add:");
    scanf("%d%d",&first,&second);
    p=&first;
    q=&second;
    sum=*p+*q;
    printf("%d is sum",sum);
}