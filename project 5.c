#include<stdio.h>
#include<string.h>
struct ele
{
    char nam[20];
    int a;
};
int main(){
    char name[20];
    int x,n,j,z;
    char temp[20];
    scanf("%d",&n);
    scanf("%s %d",name,&x);
    int same=x,diff=0,same1=x,diff1=0;
    struct ele p[n-1];
    int i;
    for(i=0;i<n-1;i++)
    {
        scanf("%s %d",p[i].nam,&p[i].a);
        int res=strcmp(name,p[i].nam);
        if(res==0)
            same=same+p[i].a;
        else{
            strcpy(temp,p[i].nam);
            diff=diff+p[i].a;
        }
    }
    for(i=0;i<n-2;i++){
        int res=strcmp(name,p[i].nam);
        if(res==0)
            same1=same1+p[i].a;
        else
            diff1=diff1+p[i].a;
    }
    if(same>diff){
    printf("%s",name);
    }
    else if(same<diff){
    printf("%s",temp);
    }
    else if(same1>diff1){
    printf("%s",name);
    }
    else if(same1<diff){
        printf("%s",temp);
    }
return 0;
}
