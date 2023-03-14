#include<stdio.h>
int main(){
	int a=4;
	int b=5;
	printf("values of a,b before swaping%d%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("valued after swaping %d %d",a,b);
	return 0;
}
