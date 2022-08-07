#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
        
        printf("Enter First array:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++)
                {
                 scanf("%d" ,&a[i][j]);
                }
            printf("\n");
        }
        printf("Enter Second array:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                scanf("%d",&b[i][j]);
                }
                printf("\n");
        }

        printf("\n");
        for(i=0;i<3;i++)
         {

            for(j=0;j<3;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     +\n");

        for(i=0;i<3;i++)
            {

                for(j=0;j<3;j++)
                {
                    printf("| %d ",b[i][j]);
                    }
                                     printf("\n");

     }

     for(i=0;i<3;i++)
            {

                for(j=0;j<3;j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    }

            }


   printf("     =\n");
           printf("\n");
        for(i=0;i<3;i++)
         {

            for(j=0;j<3;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }



}


