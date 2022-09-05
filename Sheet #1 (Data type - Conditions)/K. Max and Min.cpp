#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int a,b,c,mn,mx;
  scanf("%d%d%d",&a,&b,&c);
  if((a<b && a<c) || (a==b && a<c)) mn=a;
  else if((b<a && b<c) || (b==c && b<a)) mn=b;
  else mn=c;
  if((a>b && a>c) || (a==b && a>c)) mx=a;
  else if((b>a && b>c) || (b==c && b>a)) mx=b;
  else mx=c;
  printf("%d %d",mn,mx);
}
