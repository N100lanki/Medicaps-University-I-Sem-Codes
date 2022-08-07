#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
int main()
{struct node *head;
head=malloc(sizeof(struct node));
head->data=10;
head->link=NULL;
printf("%d is data ",head->data);
}