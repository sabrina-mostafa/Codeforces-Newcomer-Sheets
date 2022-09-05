#include<stdio.h>
int main ()
{
  long long int n,f1=0,f2=1,f,i;
  scanf ("%lld",&n);
  if(n==1) printf("0");
  else if (n==2) printf("1");
  else {
      for(i=3;i<=n;i++)
      {
          f=f1+f2;
          f1=f2;
          f2=f;
      }
      printf("%lld",f);
  }
}
