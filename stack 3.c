#include<stdio.h>
#include<stdlib.h>
#define max 100
void push();
void pop();
void peek();
void sort();
void display();
int stack[max],top=-1;
void display()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{int i;
		printf("the elements are\n");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
	}
}
void push()
{
	if(top==max-1)
	printf("stack is full");
	else
	{
		int value;
		printf("enter the value");
		scanf("%d",&value);
		top++;
		stack[top]=value;
	display();
}}
void pop()
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		top--;
	 display();
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("the peek value is %d ",stack[top]);
	}
}
void sort()
{
	int i ,j,temp;
	for(i=0;i<top-1;i++)
	{
		for(j=0;j<top-i-1;j++)
		{
			if(stack[j]>stack[j+1])
			{
				temp=stack[j];
				stack[j]=stack[j+1];
				stack[j+1]=temp;
			}
}
	}
	display();
}
void main()
{
	int choice;
	printf("enter the choice");
	while(1)
	{
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: peek();
		break;
		case 4: display();
		break;
		case 5: sort();
		break;
		case 6: exit (0);
		break;
		default: printf("enter the valid input");
	}
}
}
