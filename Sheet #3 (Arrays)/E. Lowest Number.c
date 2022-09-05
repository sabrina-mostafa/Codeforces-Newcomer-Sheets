#include<stdio.h>
int main ()
{
 int n;
 scanf("%d",&n);
 int a[n+1],i,low=100000,pos;
 for(i=1;i<=n;i++)
 {
     scanf("%d",&a[i]);
   if(a[i]<low)
   {
     low=a[i];
     pos=i;
   }
 }
 printf("%d %d",low,pos);
}


/*  ------ Alternative Way ------  */


#include <stdio.h>
int main ()
{
  int n,l=100000;
  scanf("%d",&n);
  int a[n+1],i;
  for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
  {
    if(a[i]<l)
    l=a[i];
  }
  printf("%d ",l);
  for(i=1;i<=n;i++)
    if(a[i]==l){
    printf("%d",i);
  break;
  }
}
