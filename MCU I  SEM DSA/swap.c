#include<conio.h>
#include<stdio.h>
main( ) 
{ 
 int a = 10, b = 20 ; 
 swapv ( a, b ) ; 
 printf ( "\na = %d b = %d", a, b ) ; 
} 
swapv ( int x, int y ) 
{ 
 int t ; 
 t = x ; 
 x = y ; 
 y = t ; 
 printf ( "\nx = %d y = %d", x, y ) ; 
}