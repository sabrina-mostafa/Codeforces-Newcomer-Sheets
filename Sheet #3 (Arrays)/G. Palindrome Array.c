#include<stdio.h>
int main ()
{
  int n;
  scanf("%d",&n);
  int a[n+1],i,j,f=0;
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  for(i=1,j=n;i<=(n/2);i++,j--)
  {
    if(a[i]!=a[j])
    {
    f=1;
    break;
    }
  }
  if(f==0)
  printf("YES");
  else
  printf("NO");
}
