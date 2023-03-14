#include<stdio.h>
int main(){
	int dbed,tbed;
	printf("enter cost for beds");
	scanf("%d%d",&dbed,&tbed);
	int totaldbed=3*dbed;
	int totaltbed=2*tbed;
	if(totaldbed<totaltbed)
	{
		printf("the min amount is %d\n",totaldbed);
	}
	else 
	printf("the min amount is %d",totaltbed);
	return 0;
}
