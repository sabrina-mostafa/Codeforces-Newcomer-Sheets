#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int n, f=0 ;
  cin>>n ;
  int a[n+5], b[n+5], i ;
  for(i=1; i<=n; i++)
   cin>>a[i] ;
   for(i=1; i<=n; i++)
     cin>>b[i] ;
   sort(a+1, a+n+1) ;
   sort(b+1, b+n+1) ;
   for(i=1; i<=n ;i++)
   {
     if(a[i]!=b[i])
     {
       f=1 ;
       break ;
     }
   }
   if(f==0) cout<<"yes" ;
   else cout<<"no" ;
}
