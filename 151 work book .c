#include<stdio.h>
int main(){
	int res[10];
	printf("enter the ten res");
	int i,total=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&res[i]);
		total=total+res[i];
	}
	printf("%d",total);
	return 0;
}
