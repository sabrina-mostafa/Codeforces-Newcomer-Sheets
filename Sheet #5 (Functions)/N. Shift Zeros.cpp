#include<bits/stdc++.h>
using namespace std ;
void func(int a[], int n )
{
   int i ;
   for(i=1; i<=n; i++)
   {
     if(a[i]!=0)
     cout<<a[i]<<" " ;
   }
   for(i=1; i<=n; i++)
   {
     if(a[i]==0)
     cout<<a[i]<<" " ;
   }
}
int main ()
{
  int n ;
  cin>> n ;
  int a[n+3] , i ;
  for(i=1; i<=n ; i++)
    cin>>a[i] ;
    func(a, n) ;
}
