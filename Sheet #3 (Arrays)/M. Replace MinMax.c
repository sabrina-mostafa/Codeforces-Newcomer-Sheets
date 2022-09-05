#include<stdio.h>
int main ()
{
  int n,i,max=-1000000,min=1000000,pos1,pos2,x;
  scanf ("%d",&n);
  int a[n+1];
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a[i]);
      if(a[i]>max)
      {
        max=a[i];
        pos1=i;
      }
      if(a[i]<min)
      {
          min=a[i];
          pos2=i;
      }
  }
    x=a[pos1];
    a[pos1]=a[pos2];
    a[pos2]=x;
  for(i=1;i<=n;i++)
    printf("%d ",a[i]);
}
