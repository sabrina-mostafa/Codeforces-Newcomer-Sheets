#include<stdio.h>
int main ()
{
  int n,m,x,f=0;
  scanf("%d%d",&n,&m);
  int a[n+1][m+1],i,j;
  for(i=1;i<=n;i++)
   for(j=1;j<=m;j++)
    scanf("%d",&a[i][j]);
  scanf("%d",&x);
  for(i=1;i<=n;i++)
   for(j=1;j<=m;j++)
  {
    if(a[i][j]==x)
    {
      f=1;
      break;
    }
  }
  if(f==1)
  printf("will not take number");
  else
  printf("will take number");
}
