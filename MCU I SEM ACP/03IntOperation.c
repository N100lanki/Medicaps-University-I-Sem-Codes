#include<stdio.h>
void main()
{
    int a, b,c=0;
    printf("\nEnter Two intiger");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("%d Is Addition\n",c);
    c=a*b;
    printf("%d Is Multiplication\n",c);
    c=a-b;
   printf("%d Is Subtraction\n",c);
   c=a/b;
   printf("%d Is Division\n",c);
}