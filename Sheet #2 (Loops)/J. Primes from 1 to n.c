#include<stdio.h>
int main ()
{
  int n,i,j,f;
  scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      f=1;
      if(i==1)
      f=0;
      else
      {
        for(j=2;j<i;j++)
        {
        if(i%j==0){
        f=0;
        break;}
        }
      }
      if(f==1)
       printf("%d ",i);
    }
    return 0;
}
