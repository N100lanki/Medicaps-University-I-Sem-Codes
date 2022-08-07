/*String copy*/
#include<stdio.h>
#include<string.h>
void main()
{
    char string1[20];
    char string2[20];
    printf("Enter String1:");
    scanf("%s",&string1);
    printf("\n  Befor String2:%s",string2);
    strcpy(string2,string1);/* strcpy(destination,string)*/
    printf("\nAfter String2:%s",string2);   
}