#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("C:\Ranjan\MCU1semDS\MCU1semACP\\program1.txt","w");

   if(fptr == NULL)
   {
      printf("Error AA rhi he Dost! Try Again");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}