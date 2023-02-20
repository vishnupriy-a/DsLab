#include<stdio.h>
void main()
{
    int adj[10][10],visited[10]={0},n,source,i,j,start;
    int stack[10],top=-1;
    printf("enter the no.of vertices:\n");
    scanf("%d",&n);
    printf("enter the adjacent matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&adj[i][j]);
        }
    }
    printf("enter the source vertex:\n");
    scanf("%d",&source);
    stack[++top]=source;
    visited[source]=1;
    start=source;
    while(top!=-1)
    {
        start=stack[top--];
        printf("%d\t",start);
        for(i=1;i<=n;i++)
        {
            if(adj[start][i]==1 && visited[i]==0)
            {
                stack[++top]=i;
                visited[i]=1;  
            }
        }
    }
}