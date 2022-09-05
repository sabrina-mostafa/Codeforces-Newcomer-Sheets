#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n+1],i,m=100000,count=0;
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
  {
    if(a[i]<m)
    m=a[i];
  }
  for(i=1;i<=n;i++)
  {
    if(a[i]==m)
    count++;
  }
  if(count%2!=0)
  printf("Lucky");
  else
  printf("Unlucky");
}
