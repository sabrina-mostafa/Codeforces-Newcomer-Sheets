#include<stdio.h>
int main ()
{
  int x,f=0;
  while(scanf("%d",&x)==1)
  {
  if(f==0)
  {
    if(x==1999)
    {
      f=1;
      printf("Correct\n");
    }
    else printf("Wrong\n");
  }
 }
}
