#include<bits/stdc++.h>
using namespace std ;
void fun(int a[], int x, int b[], int y)
{
int i ;
  for(i=1; i<=y; i++)
    cout<<b[i]<<" " ;
    for(i=1; i<=x; i++)
    cout<<a[i]<<" " ;
}
int main()
{
  int n, i ;
  cin>>n ;
  int a[n+4], b[n+4] ;
  for(i=1; i<=n; i++)
    cin>>a[i] ;
    for(i=1; i<=n; i++)
    cin>>b[i] ;
    fun(a, n, b, n) ;
}
