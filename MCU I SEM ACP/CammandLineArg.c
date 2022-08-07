#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])

{
    printf("The value of argc is %d \n :argc");
    for(int i =0 ;i<= argc;i++)
    {
        printf(" This argument at index Number %d has a value of %s \n",i,argv[i]);
    }
return(0);
}
