#include <stdio.h>
int main ()
{
  int n,m,i,x,sum;
  while(scanf("%d%d",&n,&m)==2)
  {
  if (n<=0 || m<=0)
  break;
   else{
  sum=0;
    if (n<m)
    {
      x=n;
      n=m;
      m=x;
    }
    for(i=m;i<=n;i++)
    {
      printf("%d ",i);
      sum+=i;
    }
    printf ("sum =%d\n",sum);
  }
  }
}
