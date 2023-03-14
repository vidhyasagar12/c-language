#include<stdio.h>
int main(){
	FILE*ptr;
	ptr=fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save.txt","w");
	int r;
	scanf("%d",&r);
	float area=3.14*r*r;
	fprintf(ptr,"area=%f",area);
	fclose(ptr);
	return 0;
}
