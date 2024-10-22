#include<stdio.h>
#define INF 999
int min(int a,int b)
{
    return (a<b)?a:b;
}
int floyd(int p[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
}
int main()
{
    int a[10][10],n,i,j;
    printf("enter the n value:");
    scanf("%d",&n);
    printf("enter the graph data:");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
    floyd(a,n);
    printf("Shortest path matix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
    printf("%d",a[i][j]);
printf("/n");
    }
}