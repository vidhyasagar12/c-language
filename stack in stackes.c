#include<stdio.h>
#define size 5
struct STACK
{
	int stack[size];
	int top;
}s;
void push(int ele)
{
	if(s.top==size-1)
	printf("stack is full");
	else 
	{
		s.top++;
		s.stack[s.top]=ele;
	}
}
int pop()
{
	if(s.top==-1)
	{
	printf("stack is empty");
	return -1;}
	else
	{
		int delete =s.stack[s.top];
		s.top--;
		return delete;
	}
}
 display()
 {
 	if(s.top==-1)
 	{
 		printf("stack is empty");
	 }
	 else
	 { int i;
	 	for(i=s.top;i>=0;i--)
	 	{
	 		printf("%d",&s.stack[i]);
		 }
	 }
 }
  peek()
  {
  	if(s.top==-1)
  	{
  		printf("stack is empty");
	  }
	  else
	  {
	  	printf("%d",s.stack[s.top]);
	  }
  }
  int main()
  {
  	int choice,ele,res;
  	s.top=-1;
  	do{
  		scanf("%d",&choice);
  		switch(choice)
  		{
  			case 1: push(scanf("%d",&ele));
  			         break;
  		    case 2:  res=pop();
  		            printf("deleted ele =%d\n",res);
  		            break;
  		    case 3: display();
  		            break;
  		    case 4: peek();
  		            break;
  		    default: 
  		    	      printf("exist\n");
		  }
	  }
  }
