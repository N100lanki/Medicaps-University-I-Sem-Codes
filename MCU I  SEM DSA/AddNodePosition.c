/*Add Node to Position*/
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *link;
};
void main()
{
	int data = 15, position = 3;
	struct node *head = (struct node *) malloc (sizeof(struct node));
	head -> data = 5;
	head -> link = NULL;
	struct node *current = malloc (sizeof(struct node));
	current -> data =10;
	current -> link = NULL;
	head -> link = 	current;
	current = malloc (sizeof(struct node));
	current -> data = 20;
	current-> link =NULL;
	head -> link -> link = current;
	printf ("data into first node = %d \n",head -> data);
	printf ("data into second node = %d \n",head -> link -> data);
	add_at_position(head,data,position);
	printf ("data into forth node = %d \n",current -> data);
}
void add_at_position(struct node *head,int data ,int pos)
{
	struct node *ptr = head;
	struct node *ptr2 = malloc (sizeof(struct node));
	ptr2 -> data = data;
	ptr2 -> link = NULL;
	while(pos!=2)
	{
		ptr = ptr -> link;
		pos --;
	}
	ptr2 -> link = ptr -> link;
	ptr -> link = ptr2;
	printf("data into node inserted at 3rd position = %d \n",ptr2 -> data);
}