#include<stdio.h>
int main ()
{
  int n,i,f=1;
  scanf("%d",&n);
  if (n==1)
  printf("No");
   else
   {
  for(i=2;i<n;i++)
  {
    if(n%i==0){
    f=0;
    break;}
  }
  }
  if(f==0)
  printf("NO");
  else
  printf("YES");
  return 0;
}
