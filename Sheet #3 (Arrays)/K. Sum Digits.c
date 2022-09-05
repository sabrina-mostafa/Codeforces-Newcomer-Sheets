#include<stdio.h>
int main ()
{
  int n;
  scanf ("%d",&n);
  int a[n+1],i,s=0;
  for(i=1;i<=n;i++)
  {
      scanf("%1d",&a[i]);
      s+=a[i];
  }
  printf("%d",s);
}
