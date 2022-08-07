#include <stdio.h>
void swap(int, int); 
int main()
{
   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(x, y); 
    return 0;
}
 
void swap(int x, int y)
{
   int temp;
 
   temp = y;
   y = x;
   x = temp;
    printf("Values of x and y is %d  %d\n",x,y);
}