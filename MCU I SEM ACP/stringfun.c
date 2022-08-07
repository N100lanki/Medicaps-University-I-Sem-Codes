#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    char string1[]="c programming";
    char string2[20];
    strcpy(string2,string1);
    puts(string2);
    strcat(string1,string2);
    puts(string1);
    puts(string2);
    n=strlen(string1);
    printf("\n Lenght of String is =%d",n);
}