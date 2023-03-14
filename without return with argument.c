#include<stdio.h>
void area(int);
int main()
{
	int e;
	scanf("%d",&e);
 area(e);
return 0;
}
void area(int r)
{
	float area=3.14*r*r;
	printf("area=%f",area);
}
