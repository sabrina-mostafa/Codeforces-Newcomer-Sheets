#include<stdio.h>
int main ()
{
  int n,rev=0,r,a;
  scanf("%d",&n);
  a=n;
  while(n!=0)
  {
    r=n%10;
    n=n/10;
    rev=r+(rev*10);
  }
  printf("%d\n",rev);
  if(rev==a)
  printf("YES");
  else
  printf("NO");
}
