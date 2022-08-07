#include <stdio.h>
 int maximum(n1,n2,n3)
 {
    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);
    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);
    if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);
    return(0);
 }
 int minimum(n1,n2,n3)
 {
     if (n1 <= n2 && n1 <= n3)
        printf("%d is the Minimum number.", n1);

    if (n2 <= n1 && n2 <= n3)
        printf("%d is the Minimum number.", n2);

    if (n3 <= n1 && n3 <= n2)
        printf("%d is the Minimum number.", n3);
    return(0);
 }
  int maximum2(n1,n2)
 {
    if (n1 >= n2)
        printf("%d is the largest number.", n1);
    if (n2 >= n1 )
        printf("%d is the largest number.", n2);
    return(0);
 }
 int minimum2(n1,n2)
 {
     if (n1 <= n2)
        printf("%d is the Minimum number.", n1);

    if (n2 <= n1)
        printf("%d is the Minimum number.", n2);
    return(0);
 }
int main() {
    int n1, n2, n3;
    printf("Enter three different numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    maximum(n1,n2,n3);
    minimum(n1,n2,n3);
    printf("\n For two verible \n");
    minimum2(n1,n2);
    maximum2(n1,n2);


    
    return 0;
}
