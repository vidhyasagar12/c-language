#include<stdio.h>
int main(){
	int x;
	int y;
 printf("enter the x and y values");
	scanf("%d%d",&x,&y);
	int newchairs=x-y;
//	printf("new chairs=%d",newchairs);
	if(y>x)
	{
		printf("new chairs not required");
	}
	else
	printf("new chairs=%d",newchairs);
	return 0;
}
