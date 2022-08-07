#include<stdio.h>
#include<conio.h>
const int city=2;
const int week=7;
void main(){
    int i,j;
float temp[city][week] ; 
        for(i=0;i<city;i++){
            for(j=0;j<week;j++)
                {printf("city%d:day%d\n",i+1,j+1);
                 scanf("%f" ,&temp[i][j]);
                }
            printf("\n");
        }
        for(i=0;i<city;i++){
            for(j=0;j<week;j++)
                {printf("\ncity%d:day%d :temp=%f",i+1,j+1,temp[i][j]);
                }
            printf("\n");
        }
}