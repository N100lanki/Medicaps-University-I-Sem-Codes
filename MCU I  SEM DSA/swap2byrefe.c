#include<stdio.h>
void swap(char **p1, char **p2)
{
     char *t=*p1;
     *p1=*p2;
     *p2=t;
 }
int main()
{
char *p1="Niranjan";
char *p2="Solanki";
swap(&p1,&p2);
printf("Swapping the Values are p1 = %s and p2 =%s",p1,p2);
}
