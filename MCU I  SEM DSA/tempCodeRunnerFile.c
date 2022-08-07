/* large in an arry using function*/
#include<stdio.h>
int main()
{
int a[5]={1,2,3,4,5};
printf("\nInput the array elements :");
Arry(a);

}
int Arry(int a[])
{
int large,small,i;
large=small=a[0];
for(i=1;i<5;++i)
{
 if(a[i]>large)
 large=a[i];

 if(a[i]<small)
 small=a[i];
 }
printf("\nThe smallest element is %d\n",small);
printf("\nThe largest element is %d\n",large);
}