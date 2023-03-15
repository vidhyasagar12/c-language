#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
};
struct node*front=NULL,*rear=NULL;
void enqueue(int item)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node*));
newnode->data=item;
if(rear==NULL&&front==NULL)
{
newnode->next=NULL;
rear=newnode;
front=newnode;
}
else
{
newnode->next=NULL;
rear->next=newnode;
rear=newnode;
}
}
void dequeue()
{
struct node*temp;
temp=front;
if(front==NULL)
{
printf("\n no elements in queue");
}
else if(front->next==NULL)
{
temp=front;
front=NULL;
rear=NULL;
free(temp);
}
else
{
temp=front;
front=front->next;
free(temp);
}
}
void display()
{
struct node* temp=front;
if(front==NULL)
{
printf("\n no queue exist");
}
else
{
while(temp!=NULL)
{
printf("\n%d",temp->data);
temp=temp->next;
}
}
}
int main()
{
display();
enqueue(200);
enqueue(300);
display();
enqueue(400);
enqueue(500);
display();
dequeue();
display();
return 0;
}
