/*Lower case Any String*/
/*String copy*/
#include<stdio.h>
#include<string.h>
void main()
{
    char string1[20];
    int length;
    printf("Enter String1:");
    scanf("%s",&string1);
    printf("\n   String1:%s",string1);
    length=strlen(string1);
    printf("\n%d Is length of string",length);
    strlwr(string1);
    printf("\nLower case of string is %s",string1);   
}