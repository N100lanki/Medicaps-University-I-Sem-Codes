/* Concatinate String*/
#include<stdio.h>
#include<string.h>
void main()
{
    char string1[20];
    char string2[20];
    printf("Enter String1:");
    scanf("%s",&string1);
    printf("Enter String2:");
    scanf("%s",&string2);
    printf("\n  Befor String1:%s",string1);
    printf("\nBefore String2:%s",string2);
    strcat(string1,string2);
    printf("\n  After String1:%s",string1);
    printf("\n  After String2:%s",string2);   
}