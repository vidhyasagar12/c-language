#include<stdio.h>
int main()
{
	int x,y;
	
	printf("enter the numbers ");
	scanf("%d",&x,&y);
	int temp1=x,temp2=y;
	int sum1=0,sum2=0,i;
	for(i=1;i<x;i++)
	{ if(x%i==0)
		sum1=sum1+i;
	}
	for(i=1;i<y;i++)
	{
		if(y%i==0)
		{
			sum2=sum2+i;
		}
	}
	if(temp2==sum1&&temp1==sum2)
	printf("amiacble");
	else
	printf("not amicable");
	return 0;
}
