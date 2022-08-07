#include <stdio.h>
int SelectionShort()
{
    int array[20], n, i, j, pos, temp;
printf("=======Selection SORT========\n");
printf("Enter Size of the array:  ");
scanf("%d", &n);
printf("Enter %d items : ", n);
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
for(i = 0; i < n - 1; i++)
{
pos=i;
for(j = i + 1; j < n; j++)
{
if(array[pos] > array[j])
pos=j;
}
if(pos != i)
{
temp=array[i];
array[i]=array[pos];
array[pos]=temp;
}
}
printf("Sorted items are :");
for(i = 0; i < n; i++)
printf("%d ", array[i]);
return 0;
}
int BubbleShort()
{
     int array[50],size,i,j,flag=1,temp;
    printf("\n=======BUBBLE SORT========\n");
    printf("Enter size of array :\n");
    scanf("%d",&size);
    printf("Enter %d elements of the array :\n",size);
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("\n\nElements before sorting are : \n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);
             for(i=0;i<size-1&&flag==1;i++)
        {
        flag=0;
        for(j=0;j<size-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                flag=1;
            }
        }
    }

    printf("\n\nElements after sorting are : \n");
    for(i=0;i<size;i++)
        printf("%d\t",array[i]);
}
int main()
{
   printf("------------------------------------------\n");
   SelectionShort();
   BubbleShort();
}
