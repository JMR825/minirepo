#include<stdio.h>
int temp[10],k=0;
int sort(int a[10][10],int id[10],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        if(id[i]==0)
        {
            id[i]=-1;
    temp[++k];
    for(i=1;i<=n;i++)
    {
        if(a[i][j]==1&&id[j]!=-1)
        id[j]--;   
    }
    i++;
    }
}
}
int main()
{
    int a[10][10],id[10],n,i,j;
    printf("Enter the n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    id[i]=0;
    printf("Enter the graph data:");
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]=1)
            id[j]++;
}
sort(a,id,n);
if(k!=n)
{
    printf("Topological ordering is not possible");
}
else
{
        for(i=1;i<=k;i++)
        printf("Topoloigcal ordering %d",temp[i]);
}
}