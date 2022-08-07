#include<stdio.h>
int swapwithout(a,b)
   {
     printf("Without Swapping : %d %d\n",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("Swapped = %d %d ",a,b);
   }
int swapwith(c,d)
 {
     int temp;
     printf("Without Swapping : %d %d\n",c,d);
     temp =c;
     c=d;
     d = temp;
     printf("Swapped = %d %d ",c,d);
 }
  void main()
  {
   int a,b ,c,d;
   printf("\n Enter Two Numbers: Without 3rd var \n");
   scanf("%d%d",&a,&b);
   swapwithout(a,b);
   printf("Enter Two Numbers: With using #rd var \n");
   scanf("%d%d",&c,&d);
   swapwith(c,d);
   


  }
