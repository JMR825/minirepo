#include<stdio.h>
int ne=1,min_cost=0;
int main()
{
    int min,cost[10][10],i,j,n,a,b,u,v,visited[10],source;
    printf("Enter the no of vertices:");
    scanf("%d",&n);
    printf("Enter cost matrix:");
    for (i = 1; i <=n; i++)
        for (j=1; j <=n; j++)
    
        scanf("%d",&cost[i][j]);
    for(i=1;i<=n;i++)
        visited[i]=0;
    printf("Enter root source");
    scanf("%d",&source);
    visited[source]=0;
    printf("minimum cost spanning tree:");
    while(ne<n)
    {
        min_cost=999;
        for(i=1;i<=n;i++)
        {
         for(j=1;j<=n;j++)
        {
         if(cost[i][j]<min)
            if(visited[i]==0)
            continue;
        else
        {
            min=cost[i][j];
            a=u=i;
            b=v=j;
        }
        }   
        }
    if(visited[u]=0||visited[v]==0)
    {
        printf("Edges %d (%d->%d)=%d",ne++,a,b,min);
        min_cost=min_cost+min;
        visited[b]=1;
    }
    cost[a][b]=cost[b][a]=999;
    }
    printf("Minimum cost =%d",min_cost);
}