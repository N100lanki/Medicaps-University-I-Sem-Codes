#include<stdio.h>
 void main()
{
   int n, flag;
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);
    flag=prime(n);
   if ( flag==1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
}
int prime(int n)
{
   int i;
    for (i=2;i<n/2;i++)
   { 
      if ( n%i==0)
     return 0;
   }
   return 1;
}