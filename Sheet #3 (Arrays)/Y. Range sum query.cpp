#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  long long int n, q, x ;
  cin>>n>>q ;
   long long int a[n+3], i, l, r, b[n+5] ;
  b[0]=0 ;
  for(i=1; i<=n; i++)
  {
    cin>>a[i] ;
    b[i]=b[i-1]+a[i] ;
 
  }
  for(i=1; i<=q; i++)
  {
    cin>>l>>r ;
    x=b[r]-b[l-1] ;
    cout<< x <<endl ;
  }
}
