#include<stdio.h>
int main()
{
	float temp;
	scanf("%f",&temp);
	if (temp>50)
	printf("very hot");
	else if(temp<50&&temp>=40)
	printf("hot");
    else if(temp<=40&&temp>30)
	printf("pleasent");
	else if(temp<=30&&temp>20)
	printf("cool day");
	else
	printf("invalid input");
	return 0;
}
