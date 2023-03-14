#include<stdio.h>
int marks[3];
int main(){
	printf("entre the marks ");
	int i,min,max;
	for(i=0;i<3;i++)
	{
		scanf("%d",&marks[i]);
	 min=max=marks[0];
		if(marks[0]>marks[i])
			min=marks[i];
		if(marks[0]<marks[i])
		max=marks[i];
	}
	printf("max marks is %d\n",max);
	printf("min marks is %d",min);
	return 0;
}
