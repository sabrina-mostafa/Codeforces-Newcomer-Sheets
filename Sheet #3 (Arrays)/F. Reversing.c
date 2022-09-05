#include<stdio.h>
int main ()
{
  int n;
  scanf("%d",&n);
  int a[n+1],i;
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  for(i=n;i>=1;i--)
    printf("%d ",a[i]);
 
}
