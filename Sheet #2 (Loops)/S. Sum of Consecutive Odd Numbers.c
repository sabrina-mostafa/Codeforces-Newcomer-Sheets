#include<stdio.h>
int main()
{
  int t,i,j,x,y,a,sum;
  scanf ("%d",&t);
  for (i=1;i<=t;i++)
  {
     // sum = 0;
    scanf ("%d%d",&x,&y);
    sum = 0;
    if(x>y)
    {
      a=x;
      x=y;
      y=a;
    }
    if(x%2==0)
    x = x + 1;
    else
    x=x+2;
    for(j=x;j<y;j+=2)
    {
      sum+=j;
    }
    printf("%d\n",sum);
  }
}
