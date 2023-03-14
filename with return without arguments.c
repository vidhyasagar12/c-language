#include<stdio.h>
float area(void);
int main()
{
  float res =area();
 printf("area=%f",res);
}
 
float area(void)
{
	int r;
	scanf("%d",&r);
	float area=3.14*r*r;
	return area;
}
