#include<stdio.h>
int factorial(int);
int factorial(int num)
{
    int ans=1,i=0;
        for(i=1;i<=num;i++)
        {
             ans=ans*i;
        }
        return ans;
}

void main()
{
int num;
printf("Enter the number to calculate its factorial:\t");
scanf("%d",&num);
if(num<0)
    {
    printf("Please enter a positive number.\n");
    }

printf("Factorial of %d is =%d",num,factorial(num));

}


