#include<stdio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack*next;
};
struct stack*top=NULL;
void push(int item)
{
struct stack*newnode=(struct stack*)malloc(sizeof(struct stack*));
newnode->data=item;
if(top==NULL)
{
newnode->next=NULL;
top=newnode;
}
else
{
newnode->next=top;
top=newnode;
}
}
void pop()
{
if(top==NULL)
{
printf("\n can be delete");
}
else
{
struct stack*temp;
temp=top;
top=top->next;
}
}
void display()
{
if(top==NULL)
{
printf("\n stack is empty");
}
else
{
struct stack*temp;
temp=top;
printf("\n stack is:");
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
push(555);
push(666);
push(777);
push(999);
display();
pop();
display();
}
