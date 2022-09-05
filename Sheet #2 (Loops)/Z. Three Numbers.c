#include<stdio.h>
int main ()
{
  int x,y,z,s,k,c=0;
  scanf("%d%d",&k,&s);
  for(x=0;x<=k;x++)
  {
    for(y=0;y<=k;y++)
    {
      z=s-x-y;
      if(z<0 || z>k) continue;
      if( x+y+z == s)
      {
        c++;
      }
    }
  }
  printf("%d",c);
}
