#include<stdio.h>
#include<stdlib.h>
#define N 5
int Stack[N];
int top=-1;
void push()
{
    int item;
if(top==N-1) printf("Stack OverFlow\n");
else{
    top++;
    printf("\n Enter Element To be insert");
    scanf("%d",&item);
    Stack[top]=item;
    printf("\n item %d Inserted",item);
    }

}
void pop(){
    int x=Stack[top];
    if(top==-1)printf("\nStack is empty");
    else
    {
    top--;
    printf("\n %d is deleted",x);
    }
}
void peek(){

    if(top==-1)printf("\nStack is empty");
    else
    printf("Top Item is %d",Stack[top]);
}
void display(){
    int i;
    for(i=top;i>=0;i--)
    {
        printf("\t %d",Stack[i]);
    }
}
void main(){
    int ch;
while(1){
    printf("\n=====Stack Menu=====\n");
    printf("1.Push.\n");
    printf("2.Pop.\n");
    printf("3.Peek.\n");
    printf("4.Display\n");
    printf("5.Search\n");
    printf("6.Exit.\n");
    printf("Enter Your Choice (1-5): ");
    scanf("%d",&ch);
    switch(ch){
    case 1 :push();
    break;
    case 2: pop();
    break;
    case 3: peek();
    break;
    case 4: display();
    break;
    case 6: exit(0);
    break;
    default :printf("\nInvalid choice!!");
    }
}
}
