#include<stdio.h>
int main(){
	FILE*ptr;
	ptr=fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save2.txt","r");
	int r[10];
	int i;
	float avg;
	for(i=0;i<10;i++)
	{
		fscanf(ptr,"%d",r[i]);
	avg=r[i]/10;}
	
	printf("avg=%f",avg);
	fclose(ptr);
	return 0;
	
}
