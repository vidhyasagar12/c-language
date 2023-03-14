#include<stdio.h>
int marks[3];
int main(){
	printf("entre the marks ");
	int i,min,max;
	for(i=0;i<3;i++)
	{
		scanf("%d",&marks[i]);
		
	}
	for(i=1;i<3;i++)
	{
		min=max=marks[0];
		if(min>marks[i])
			min=marks[i];
		if(max<marks[i])
		max=marks[i];
	}
	printf("max marks is %d\n",max);
	printf("min marks is %d",min);
	return 0;
}
