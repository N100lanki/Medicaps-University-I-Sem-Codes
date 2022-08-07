#include<stdio.h>
#include<string.h>
void integer1()
{
    int a;
    printf("\nEnter A intiger");
    scanf("%d",&a);
    printf("%d Is A Integer\n",a);
}
void float1()
{   float b;
    printf("\nEnter A Float");
    scanf("%f",&b);
    printf("%f Is A Float Point\n",b);
}
void char1()
{
    char ch;
    printf("\nEnter A Character");
    scanf(" %c",&ch);
    printf(" %c  Is A Character\n",ch);
    
}
void string1()
{
    char   str[10];
    printf("\n Enter String:");
    gets(str);
    printf("String Is \n");
    puts(str);
  
}
int main()
{
    
    
    integer1();
   
    float1();
   
    char1();    

    string1();
 

}