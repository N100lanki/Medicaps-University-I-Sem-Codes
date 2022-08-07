// WAP To Series :(x^0/0!)+(x^1/1!)+(x^2/2!)+(x^3/3!)+(x^4/4!)
#include<stdio.h>
#include<math.h>
int factorial(int num){
    int ans=1,i=0;
        for(i=1;i<=num;i++){
             ans*=i;
        }
        return ans;
    }
int power(int num,int pow){
    int ans=1,i=0;
        for(i=0;i<pow;i++){
                ans*=num;
        }
        return ans;
    }

void main(){
int n,i=0,sum=0;

printf("\nEnter the length of series: ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++){

    sum+=pow(n,i)/factorial(i);
    if(i<n-1)
   printf("(x^%d/%d!)+",i,i);
   else
       printf("(x^%d/%d!)",i,i);

}
printf("\nSum: %d\n",sum);



}
