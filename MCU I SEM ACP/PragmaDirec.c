#include<stdio.h> 
    
void func1(); 

void func2(); 
    
 
    
void func1() 
{ 
    printf("Inside func1()\n"); 
} 
    
void func2() 
{ 
    printf("Inside func2()\n");    
} 
#pragma startup func1 
#pragma exit func2
    
int main() 
{ 
    printf("Inside main()\n"); 
        
    return 0; 
}