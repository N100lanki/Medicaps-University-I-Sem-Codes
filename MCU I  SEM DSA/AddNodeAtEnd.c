#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void AddAtEnd(struct node *head, int data)
{
    struct node *ptr,*temp;
    ptr=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=NULL;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link;

}
int main()
{struct node *head;
head=malloc(sizeof(struct node));
head->data=10;
head->link=NULL;
printf("%d is data ",head->data);
}