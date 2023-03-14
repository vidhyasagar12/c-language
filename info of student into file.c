#include<stdio.h>
int main(){
	FILE*ptr;
	ptr=fopen("C:\\Users\\Vidhya Sagar\\OneDrive\\Desktop\\save.txt","w");
	char name[20];
	int age;
	char branch[3];
	float cgpa;
	printf("enter the data ");
	scanf("%s%d%s%f",name,&age,branch,&cgpa);
	fprintf(ptr,"name=%s\nage=%d\nbranch=%s\ncgpa=%f",name,age,branch,cgpa);
	fclose(ptr);
	printf("data entered into file");
	return 0;
}
