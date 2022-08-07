#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{ int i ,a[5] ;
int *p=&a;
  printf("enter the 5 values ");
  for (i=0;i<5;i++)
     scanf("%d",(a+i));
  for(i=0;i<5;i++)
     printf("%d",*(p+i));

    return(0);
}