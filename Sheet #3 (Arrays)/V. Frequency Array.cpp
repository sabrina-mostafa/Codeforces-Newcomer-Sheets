#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int n, m, i;
  cin>>n>>m ;
  int a[n+5], b[m+3]={0} ;
  for(i=1; i<=n; i++)
  {
    cin>>a[i] ;
    b[ a[i] ]++ ;
  }
  for(i=1; i<=m; i++)
    cout<<b[i]<<endl ;
}
