#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,sizeA=0,sizeB=0;

        printf("Enter size of Matrix  :\n");

        scanf("%d%d",&sizeA,&sizeB);
if(sizeA==sizeB)
 {
        printf("Enter First Matrix:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++)
                {
                 scanf("%d" ,&a[i][j]);
                }
        }
        printf("Enter Second Matrix:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++){
                scanf("%d",&b[i][j]);
                }
                printf("\n");
        }
        for(i=0;i<sizeA;i++)
         {
            for(j=0;j<sizeB;j++)
             {
                 printf(" %d ",a[i][j]);
                 }
                  printf("\n");

        }
        for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    printf(" %d ",b[i][j]);
                    }
                         printf("\n");
     }

     for(i=0;i<sizeA;i++)
            {
                for(j=0;j<sizeB;j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    }
     }
        for(i=0;i<sizeA;i++)
         {
           for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }
 }
 else 
 printf("You Entered Wrong Choice");
}


