#include<stdio.h>
void main(){
int *a,*b,c,d,sum=0,sub=0,mul=0;
float div=0;
printf("\nEnter Two numbers to add : ");
scanf("%d%d",&c,&d);
a=&c;
b=&d;
sum=*a+*b;
printf("\nSum is : %d",sum);
sub=*a-*b;
printf("\nSubtraction is : %d",sub);
mul=*a**b;
printf("\nMultiplication is : %d",mul);
div=(*a)/(*b);
printf("\nDivision is : %f",div);
}
