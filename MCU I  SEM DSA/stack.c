#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#define MAX 6
int stack[6];
int top=-1;
void push();
void pop();
void show();
int main()
{
    int choice,i=1;
    char ch='y';
    
    
     while(i=1)
     {
        printf("\noperations performed by");
        printf("\n 1.push the element \n 2.pop the element \n 3. show the element");
        printf("\nEnter choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                   break;
             case 2:pop();
                   break;
             case 3:show();
                   break;
             case 4:exit(1);
                    break;
             default:
                    printf("\n invalid choice");
                           i++;  
            /*        printf("\nDo you want to continue ?: (y/n)");
                    fflush(stdin)
                    scanf("%c",&ch);*/
    
        }
     }
      
}
     void push()
    {
      int x;
      printf("\nEnter Data Elements  ");
      scanf("%d",&x);
      if(top==6-1)
      {
          printf("\noverflow you cant Insert ");

      }
     else
      {
         top=top+1;
         stack[top]=x;
         printf("\nitem inserted");
     }
    } 
     void pop()
     {
         int item;
         if(top==-1)
         {
             printf("\nUnderflow");
         }
         else
         {
             item=stack[top];
             top=top-1;
             printf("\n%d pop item",item);
         }
     }
     void show()
     {
         int i ;
         for(i=top;i>=0;i--)
         {
             printf("\n%d ",stack[i]);
         }
     }