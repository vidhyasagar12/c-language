#include<stdio.h>
#include<stdlib.h>
#define max 100
int stack[max],top=-1,i,j;
void display();
void pop();
void push();
void peek();
void sort();

void display()
{
	if(top==-1)
	printf("stack is empty");
	else
	{
		printf("the elements of a stack are\n");
		for(i=top;i>=0;i--)
		{
			printf("| %d | [%d]",stack[i],i);
			
			if(i==top)
			printf("<-----[top]");
			printf("\n");
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
	}
}
void pop()
{
	if(top==-1)
	printf("stack is under flown");
	else
	top--;
	display();
}
void peek()
{
	if(top==-1)
	printf("no elements ");
	else
	printf("peek element =%d",stack[top]);
}
void sort()
 {
 if(top==-1)
printf("stack is empty");
else
{
	for(i=0;i<top-1;i++)
	{
		for(j=0;j<top-i-1;j++){
	if(stack[j]>stack[j+1])
	{
	 int temp=stack[j];
		stack[j]=stack[j+1];
		stack[j+1]=temp;
	}}}
	display();
}}
void main()
{
	while(1)
	{
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:push();
	break;
	case 2: pop();
	break;
	case 3: peek();
	break;
	case 4: display();
	break;
	case 5: sort();
	break;
	case 6 : exit(0);
	break;
	default: printf("input valid vaue");
	
}
		
	}
}
