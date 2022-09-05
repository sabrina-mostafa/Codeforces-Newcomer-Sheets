#include <stdio.h>
int main ()
{
  char s;
  int n,x[102],i,j;
  scanf ("%c",&s);
  scanf ("%d",&n);
  for (i=1;i<=n;i++)
    scanf("%d",&x[i]);
  for (i=1;i<=n;i++)
  {
    for(j=1;j<=x[i];j++)
    printf ("%c",s);
    printf("\n");
  }
  return 0;
}
