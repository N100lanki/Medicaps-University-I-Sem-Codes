
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   // Open two files to be merged
   FILE *fp1 = fopen("Ninjan.txt", "r");
   FILE *fp2 = fopen("ram.txt", "r");
  
   // Open file to store the result
   FILE *fp3 = fopen("ram0.txt", "w");
   char c;
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
  
   // Copy contents of first file to file3.txt
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
  
   // Copy contents of second file to file3.txt
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
  
   printf("Merged Ninjan.txt and ram.txt into ram0.txt");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}