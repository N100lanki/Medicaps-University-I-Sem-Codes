#include<stdio.h>
int MatrixAddSub()
{
int a[5][5],b[5][5],c[5][5],i,j,sizeA=0,sizeB=0;
        printf("Enter size of array upto 5 :\n");

        scanf("%d%d",&sizeA,&sizeB);

        printf("Enter First array:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++)
                {
                 scanf("%d" ,&a[i][j]);
                }
            printf("\n");
        }
        printf("Enter Second array:\n");
        for(i=0;i<sizeA;i++){
            for(j=0;j<sizeB;j++){
                scanf("%d",&b[i][j]);
                }
                printf("\n");
        }

        printf("\nAddition is : \n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     +\n");

        for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    printf("| %d ",b[i][j]);
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


   printf("     =\n");
           printf("\n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }


            printf("\nSubtraction  is : \n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     -\n");

        for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    printf("| %d ",b[i][j]);
                    }
                                     printf("\n");

     }

     for(i=0;i<sizeA;i++)
            {

                for(j=0;j<sizeB;j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                    }

     }


   printf("     =\n");
           printf("\n");
        for(i=0;i<sizeA;i++)
         {

            for(j=0;j<sizeB;j++)
             {
                 printf("| %d ",c[i][j]);
                 }
                  printf("\n");
         }
}
int MatrixMultiplication()
{
    int a[5][5],b[5][5],c[5][5]={0},i,j,row1,col1,row2,col2,k=0,sum=0;
        printf("Lets Go For Matrix Multiplication\n");
        printf("Enter number of rows in first array up to 5 :\t");
        scanf("%d",&row1);
         printf("Enter number of columns in first array up to 5 :\t");
        scanf("%d",&col1);
         printf("Enter number rows in second array up to 5 :\t");
        scanf("%d",&row2);
         printf("Enter number of columns in second array up to 5 :\t");
        scanf("%d",&col2);
        if(col1==row2){

        printf("Enter First array:\n");
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++)
                {
                 scanf("%d" ,&a[i][j]);
                }
            printf("\n");
        }
        printf("Enter Second array:\n");
        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                scanf("%d",&b[i][j]);
                }
                printf("\n");
           }

         printf("\n");
        for(i=0;i<row1;i++)
         {
             for(j=0;j<col1;j++)
             {
                 printf("| %d ",a[i][j]);
                 }
                  printf("\n");

        }
        printf("     *\n");

        for(i=0;i<row2;i++)
            {

                for(j=0;j<col2;j++)
                {
                    printf("| %d ",b[i][j]);
                    }
            printf("\n");

     }
                printf("      =  \n");
         for(i=0;i<row1;i++)
            {

                for(j=0;j<col2;j++)
                {

                    for(k=0;k<row2;k++){


                        sum +=(a[i][k] * b[k][j]);

                    }
                    c[i][j]=sum;
                        sum=0;

                }

            }

              for(i=0;i<row1;i++)
            {
                for(j=0;j<col2;j++)
                {
                  printf("| %d ",c[i][j]);

                }
                printf("\n");
            }



        }else{
            printf("\t The number of columns in first array must be same as rows of second array!!");
        }
}
void main()
{    
    printf("------------------\n");
    printf("Enter Matrix For Addition + Subtraction\n");
     MatrixAddSub();
    printf("------------------\n");
     MatrixMultiplication();



}


