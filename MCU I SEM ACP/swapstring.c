#include<stdio.h>
void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
}  
   
int main()
{
  char *str1 = "Ninjan";
  char *str2 = "Solanki";
  printf("String1 is:%s,Strin2 Is:%s\n",str1,str2);
  swap(str1, str2);
  printf("\nstr1 is %s, str2 is %s", str1, str2);
  getchar();
  return 0;
}