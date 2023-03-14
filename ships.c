#include<stdio.h>
#include<math.h>
 int main()
{
	float ab,bc,x,y,dis;
	x=3.14*30/180;
	y=  3.14*45/180;
	ab=100/tan(x);
	bc=100/tan(y);
	dis=ab+bc;
	printf("%f",dis);
	return 0;
}
