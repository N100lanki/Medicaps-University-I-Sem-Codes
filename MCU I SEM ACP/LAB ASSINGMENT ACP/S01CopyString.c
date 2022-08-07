#include <stdio.h>
#include<string.h>
int main() {
    char s1[100], s2[100],s3[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2 by using UserDefine Function : %s", s2);
    strcpy(s3,s1);
    printf("String s3 by using In Built Function: %s", s3);
    
    return 0;
}