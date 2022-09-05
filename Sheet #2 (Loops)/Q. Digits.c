#include <stdio.h>
int main ()
{
  int t,n,r,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf ("%d",&n);
    if(n==0)
        printf("0");
    while(n!=0){
      r=n%10;//1 2
      printf ("%d ",r);
      n=n/10;//12 1
       //printf ("%d ",r);//1 2
    }
    printf("\n");
  }
}
