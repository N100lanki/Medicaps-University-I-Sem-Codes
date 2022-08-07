#include<stdio.h>
#include<conio.h>
int max(int num1 , int num2) {
     
     int result ;
     if (num1> num2 )
     result = num1;
     else
     result = num2 ;
     return result ;
 }
 int main ()
 {
     int a=100,b=110, c;
     c = max (a,b);
     printf("Max. value  is %d ",c);
     return 0;
 }