#include<stdio.h>
int main(){
	char n[4];
	int id;
	char g;
	char b[3];
	long int phn;
	float cgpa;
	scanf("%s %d %c %s %ld %f",&n,&id,&g,&b,&phn,&cgpa);
	printf("%s%d%c%s%ld%f",n,g,b,phn,cgpa);
	return 0;
	
}
