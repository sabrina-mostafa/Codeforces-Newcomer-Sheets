#include<stdio.h>
int main ()
{
  int n;
  scanf("%d",&n);
  long long int a[n+1],i,x,sum=0;
  for(i=1;i<=n;i++)
  {
    scanf("%lld",&a[i]);
    sum+=a[i];
  }
  x=sum;
  if(x<0) x=-1*x;
  printf("%lld",x);
}
