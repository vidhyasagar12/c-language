#include<stdio.h>
void main()
{
    int i,j,k;
    int x,y;
    printf("enter x,y values");
    scanf("%d %d",&x,&y);
    int a[x][y],b[x][y],c[x][y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            c[i][j]=0;
            for(k=0;k<x;k++)
            {
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d\t",c[i][j]);
        }
    printf("\n");
    }
}
