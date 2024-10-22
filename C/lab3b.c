#include<stdio.h>
int temp[10],k=0;
void sort(iny a[][10],int id[],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        id[i]=-1;
        temp[++k]=i;
        for(j=1;j<=n;j++)
        {
            id[j]--;
        }
        i=0;
    }
}
int main()
{
    int a[10][10],id[10],i,n,j;
    printf("Enter n value:");
    scanf("%d",)
}