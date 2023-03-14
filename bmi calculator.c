#include<stdio.h>
int main(){
	float weight;
	float height;
	scanf("%f%f",&weight,&height);
	float weightkgs=weight*0.45359237;
	float heightmtrs=height*0.0254;
	float sqrheightmtrs=heightmtrs*heightmtrs;
	float bmi=weightkgs/sqrheightmtrs;
	if(bmi<18.5)
	{
		printf("underweight");
	}
	else if(bmi>=18.5&&bmi<=25)
	{
		printf("normal");
	}
	else if(bmi>=25.0&&bmi<=30.0)
	{
		printf("overweight");
	}
	else if (bmi>=30.0)
	{
	
		printf("obese");
}
	
	else	printf("ebtre valid input");
	return 0;
}
