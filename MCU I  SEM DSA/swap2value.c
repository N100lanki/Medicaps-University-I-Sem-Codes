//Call by Value Example - Swapping 2 Strings using Call by Value
#include <stdio.h>
int main()
{
   char  x, y;
   printf("Enter the value of x and y\n");
   scanf("%s%s",&x,&y);
   swap(x,y); 
  printf("After Swapping\nx = %s\ny = %s\n", x, y);
    return 0;
}
 void swap(char a, char  b)
{
   char  *temp;
 
   temp = b;
   b = a;
   a = temp;
    printf("Strings of a and b is %s  %s\n",a,b);
}