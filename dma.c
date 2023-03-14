#include<stdio.h>           
#include<stdlib.h>
int main()
{
int *p,i;
int n;
scanf("%d",&n);
p=(int*)mallco(n*sizeof(int));
p=(int*)calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
printf("enter integer value");
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{printf(":output values =%d\n",*(p+i));
}
return 0;
}

