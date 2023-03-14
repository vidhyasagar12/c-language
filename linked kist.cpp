#include<stdio.h>
#include<stdlib.h>
void atstart();
void atend();
void atpos();
void del();
void display();
int length();
struct node
{
	int data;
	int *link;
};
struct node* root=NULL;

void atstart()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data to be inserted ");
	scanf("%d",&temp->data);
	 temp->link=NULL;
	 if(root== NULL)
       {root=temp;}
       else
       {
       temp->link= (struct node*)root;
	   root=temp;	
	   }
	   display();
}
void atend()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data to be inserted");
	scanf("%d",&temp->data);
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}
void atpos()
{
	struct node* temp,*p;
   int loc,i=0;
   printf("enter the loc");
   scanf("%d",&loc);
   int l=length();
   if(loc>l)
   printf("invlid loc");
   else
   { p=root;
    while(i<loc)
    {
   	  p=p->link;
   	  i++;
   }
     temp=(struct node*)malloc(sizeof(struct node));
    printf("enter the data to be entered");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=p->link;
    p->link=temp;
}}
void del()
{
	struct node* temp;
	int loc;
	printf("enter the loc");
	scanf("%d",&loc);
	if(loc>length())
	printf("invlid loc");
	else if(loc==1)
	{
	    temp=root;
	    root=temp->link;
	    temp->link=NULL;
	    free(temp);
	    }
	else 
	{
		int i=1;
		struct node* temp;
		struct node* q;
		p=root;
		while(i<loc-1)
		{
			temp=temp->link;
			i++;
		}
		q=temp->link;
		temp->link=q->link;
		q->link=NULL;
		free(q);
	}
}
void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
	printf("no nodes");
	else
	{
		while(temp!=NULL)
			printf("%d",temp->data);
		{
			temp=temp->link;
		}
	}
}
int length()
{
	struct node *temp;
	temp=root;
	int count =0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
void main()
{
	int choice;
	while(1)
	{
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: atstart();
			break;
			case 2:  atend();
			break;
			case 3:  length();
			break;
			case 4:  atpos();
			break;
			case 5:  del();
			break;
			case 6: display();
			break;
			case 7: exit(0);
			break;
			default: printf("invalid one");
		}
	}
}
