
#include<stdio.h>
void area(void);
int main()
{
area();
 return 0;}
 
void area(void)

{
	int r;
	scanf("%d",&r);
	float area=3.14*r*r;
	printf("area=%f",area);
}
