#include<stdio.h>
int main()
{
  int n,x,f=0;
  scanf("%d",&n);
  int a[n+1],i;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  scanf("%d",&x);
  for(i=0;i<n;i++)
  {
    if(a[i]==x)
    {
     printf("%d",i);
     f=1;
     break;
    }
  }
  if(f==0)
    printf("-1");
}
