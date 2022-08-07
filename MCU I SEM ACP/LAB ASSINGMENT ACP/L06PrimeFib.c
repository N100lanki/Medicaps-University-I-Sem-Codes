#include<stdio.h>
#define MAX 100
void fibonacci(int n)
{
 int i, term1 = 0, term2 = 1, nextTerm;
 for (i = 1; i<=n; i++)
 {
  nextTerm = term1 + term2;
  term1 = term2;
  term2 = nextTerm;
  printf("%d\t",nextTerm);
 }
 printf("%d", term1);
}

void prime(int n)
{
  int i,j,c;  
    printf("\nPrime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
         
       if(c==2)
        {
            printf("%d ",i);
        }
    }
}

int main( )
{
 int n;
 printf("\nEnter No of terms ");
 scanf("%d", &n);
  fibonacci (n);
  prime(n);
 return 0;
}