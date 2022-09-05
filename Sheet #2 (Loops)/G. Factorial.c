#include<stdio.h>
int main ()
{
    int t;
  long long int n,f,i;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lld",&n);
    f=1;
    if(n==0 || n==1)
    printf("1\n");
    else
    {
      for(i=1;i<=n;i++)
       f*=i;
       printf("%lld\n",f);
    }
  }
}
