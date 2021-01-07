#include <stdio.h>
int main()
{
int dist[10][10],succ[10][10],n,i,j,k;
int newDist;

printf(“Enter no. of vertices n=”);
scanf("%d",&n);
for (i=0;i<n;i++)
  for (j=0;j<n;j++)
  {
    dist[i][j]=999;
    succ[i][j]=j;
  }
while (1)
{
  printf(“Enter n*n adjacency matrix\n”);
  scanf("%d %d %d",&i,&j,&k);
  if (i==(-1))
    break;
  dist[i][j]=k;
}
for (i=0;i<n;i++)
{
  for (k=0;k<n;k++)
    printf("%3d %d ",dist[i][k],succ[i][k]);
  printf("\n");
}
printf("-------------------------------\n");
/* Floyd-Warshall */
for (j=0;j<n;j++)
{
  for (i=0;i<n;i++)
    if (dist[i][j]<999)
      for (k=0;k<n;k++)
      {
        newDist=dist[i][j]+dist[j][k];
        if (newDist<dist[i][k])
        {
          dist[i][k]=newDist;
          succ[i][k]=succ[i][j];
        }
      }
  for (i=0;i<n;i++)
  {
    for (k=0;k<n;k++)
      printf("%3d %d ",dist[i][k],succ[i][k]);
    printf("\n");
  }
  printf("-------------------------------\n");
}
for (i=0;i<n;i++)
  for (j=0;j<n;j++)
    if (dist[i][j]==999)
      printf("No path from %d to %d\n",i,j);
    else
    {
      printf("Distance %d for %d ",dist[i][j],i);
      for (k=succ[i][j];
           k!=j;
           k=succ[k][j])
        printf("%d ",k);
      printf("%d\n",j);
    }
}