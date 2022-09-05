#include<stdio.h>
int main ()
{
  int t,n,i,x,j;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    int a[n+1],sm=100000000;
    for(i=1;i<=n;i++)
      scanf("%d",&a[i]);
    for(i=1;i<n;i++)
     for(j=i+1;j<=n;j++)
     {
        x=a[i]+a[j]+j-i;
        if(x<sm)
        sm=x;
     }
     printf("%d\n",sm);
  }
}
