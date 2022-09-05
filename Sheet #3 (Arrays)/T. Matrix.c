#include<stdio.h>
int main ()
{
  int n;
  scanf("%d",&n);
  int a[n+1][n+1],i,j,d,sum1=0,sum2=0;
  for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
   for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    {
      if(i==j)
      sum1=a[i][j]+sum1;
    }
    for(i=1,j=n;i<=n;i++,j--)
    sum2=sum2+a[i][j];
    d=abs(sum1-sum2);
    printf("%d",d);
}
