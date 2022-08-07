/* campare string1 string2*/
#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    char string1[20];
    char string2[20];
    printf("Enter String1");
    scanf("%s",&string1);
    printf("\nEnter String2");
    scanf("%s",&string2);
    n=strcmp(string1,string2);
    printf("\n Camparision of String is:%d  \n if returns 0 strings id equal \n if returns -1 string1 is less than string2 \n If returns 1 string2 is greater",n);
}