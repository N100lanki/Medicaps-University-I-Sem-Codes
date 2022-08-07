/*Reverse String*/
#include<stdio.h>
#include<string.h>
void main()
{   int i, length;
    char ch,string2[20],string1[20];
    printf("Enter String1:");
    scanf("%s",&string1);
    printf("\n   String1:%s\n",string1);
    length=strlen(string1);
    printf("reverse of String Is\n");
    for(i=length;i>=0;i--)
    {
        printf("%c",string1[i]);

    }
    printf("\n%s  string",string1);   
}