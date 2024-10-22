#include<stdio.h>
#define inf 999
int dijkstra(int c[][],int n,int s,int d[])
{
    int min,v[],i,j,u;
    for(i=1;i<=n;i++)
    {
        d[i]=c[s][i];
        v[i]=0;
    }
    v[s]=1;
    for(i=1;i<=n;i++)
    {
        min=inf;
        for(j=1;j<=n;j++)
        {
            if(v[j]==0&&d[j]<min)
            {min=d[j];
            u=j;
            }
            v[u]=1;
            for(j=1;j<=n;j++)
            {
                if(v[j]==0&&d[u]+c[u][j]<d[j])
                d[j]=d[u]+c[u][j];
            }
        }
    }
}