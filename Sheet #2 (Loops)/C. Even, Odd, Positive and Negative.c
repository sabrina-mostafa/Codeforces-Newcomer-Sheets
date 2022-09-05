#include<stdio.h>
int main()
{
   int n,x,i,e=0,o=0,p=0,ne=0;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
      scanf("%d",&x);
     if(x%2==0)
     e++;
     if(x%2!=0)
     o++;
     if(x>0)
     p++;
     if(x<0)
     ne++;
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",e,o,p,ne);
  return 0;
}
