#include<stdio.h>
#include<stdlib.h>  
  int main()  
{  
    int a, b;  
    int choice;  
    while(1)
    {
    printf("Enter your choice\n");  
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n 5.Exit\n");  
    scanf("%d", &choice);  
    switch(choice)  
    {  
        case 1:   printf("Enter 2 integer numbers\n");  
                    scanf("%d %d", &a, &b);  
                    printf("%d + %d = %d\n", a, b, (a+b));  
                    break;  
  
        case 2:   printf("Enter 2 integer numbers\n");  
                    scanf("%d %d", &a, &b); 
                    printf("%d - %d = %d\n", a, b, (a-b));  
                     break;  
  
        case 3:    printf("Enter 2 integer numbers\n");  
                     scanf("%d %d", &a, &b); 
                     printf("%d x %d = %d\n", a, b, (a*b));  
                break;  
  
        case 4:    printf("Enter 2 integer numbers\n");  
                     scanf("%d %d", &a, &b); 
        
                    if( b != 0)  
                    printf("%d / %d = %d\n", a, b, (a/b));  
                else  
                    printf("Number can't be divided by 0\n");  
                break;  
        case 5:exit(0);
        default: printf("You entered wrong choice\n");  
                 break;  
    }  
    }
  
    return 0;  
} 