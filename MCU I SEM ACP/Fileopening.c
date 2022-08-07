#include<stdio.h>
#include<stdlib.h>

int main()
{
 
    FILE *fp;   /* file pointer*/
    char fName[20];
    char ch;
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);
 
    /*creating (open) a file*/
    fp=fopen(fName,"w");
    /*check file created or not*/
    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); 
    } 
    printf("File created successfully.");
    /*writting into file*/
    printf("\n Enter Data to write :");
    while((ch = getchar())!='\n')
     {

        putc(ch ,fp);
     }
 fp = fopen(fName,"r");
 if(fp == NULL)
  {
      printf("\ncan not open file.");
      exit(0);
  }
    
    /*again open file to read data*/
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
        exit(0);
    }
 
    printf("Contents of file is :\n");
    while((ch=getc(fp))!=EOF)
    {
        printf("\n %c ",ch);
    }
 
    fclose(fp);
    return 0;
}