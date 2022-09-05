#include <stdio.h>
int main ()
{
  int n,i,f1=0,f2=1,f;
  scanf("%d",&n);
  if(n==1)
  printf ("%d ",f1);
  else if(n==2)
    printf("%d %d ",f1,f2);
  else{
        printf("%d %d ",f1,f2);
  for (i=3;i<=n;i++)
  {
      f=f1+f2;
      printf("%d ",f);
      f1=f2;
      f2=f;
  }
  }
}
