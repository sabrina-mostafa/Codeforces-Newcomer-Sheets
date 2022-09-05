#include <stdio.h>
int main ()
{
  int n,i,j,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<n;j++)
        printf(" ");
    for(k=1;k<=i;k++)
        printf ("*");
    for (k=1;k<i;k++)
        printf("*");
    printf ("\n");
  }
  for(i=1;i<=n;i++)
  {
      for (j=1;j<i;j++)
        printf(" ");
      for (k=i;k<=n;k++)
        printf("*");
      for(k=i;k<n;k++)
        printf ("*");
      printf("\n");
  }
}
