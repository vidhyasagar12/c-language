#include<stdio.h>
void fun1(void){
	static int a=10;
	static int b=24;
	++a;
	++b;
	printf("a:%d,b:%d\n",a,b);
}
int main(){
 fun1();
 fun1();
 fun1();
	return 0;
}
