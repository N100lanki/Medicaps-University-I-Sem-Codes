#include <stdio.h>
 
void main()
{
    int number, tempnum1, tempnum2;
 
    printf("Enter an integer \n");
    scanf("%d", &number);
    tempnum1 = number;
    number = number << 2;
    tempnum2 = tempnum1;
    tempnum1 = tempnum1 >>2;  


    printf("%d x 4 = %d\n", tempnum1, number);
    printf("%d / 4 = %d\n", tempnum2, tempnum1);
}