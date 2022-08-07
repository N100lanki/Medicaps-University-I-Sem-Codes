#include<stdio.h>
#include<conio.h>
#include<math.h> 
int fact(int); 
int main()
 { 
     int x,n,i,p; 
     float sum=0;
      printf("/n enter value of x");
       scanf("%d",&x); printf("/n enter number of terms ");
        scanf("%d",&n);
         for(i=1;i<=n-1;i++)
          { p=(2*i)+1; sum=sum+pow(x,p)/fact(p); }
           sum=x-sum; printf("/n sum=%f",sum);
            return 0;
             }
              int fact(int p)
               {
                    int j,f=1; 
                    for(j=1;j<=p;j++) 
                    { 
                        f=f*j;
                         }
                          return (f);
                           }