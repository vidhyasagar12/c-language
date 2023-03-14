#include<stdio.h>
int main(){
	int i,j,sum=0,sum1=0;
	for(i=1;i<220;i++)
	{
		if(220%i==0)
		{
			printf("%d ",i);
			sum=sum+i;
}
		}
		printf("\n");
 	for(j=1;j<284;j++)
	{
		if(284%j==0)
		{
			printf("%d ",j);
			sum1=sum1+j;
		}
	}
		
	
	printf("\n");
	if((sum==284)&&(sum1==220))
	{
		printf("the given num is a amicable");
	}
	else
	{printf("not a amicable ");
}
	

	return 0;
}
