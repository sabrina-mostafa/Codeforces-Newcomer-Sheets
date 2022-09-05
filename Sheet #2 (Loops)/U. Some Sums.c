#include<stdio.h>
int main()
{
  int n,a,b,sum,s=0,i,r,x;
  scanf("%d%d%d",&n,&a,&b);
  for(i=1;i<=n;i++)
  {
    x=i;
    sum=0;
    while(x!=0)
    {
      r=x%10;
      sum+=r;
      x/=10;
    }
    if(sum>=a && sum<=b){
     s+=i;
    }
  }
  printf("%d",s);
}
