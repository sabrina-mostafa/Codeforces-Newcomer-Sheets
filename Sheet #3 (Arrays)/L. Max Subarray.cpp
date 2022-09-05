#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int t, n ;
  cin>>t ;
  while(t--)
  {
    cin>>n ;
    int a[n+2], i , j, max ;
    for(i=1; i<=n; i++)
    cin>>a[i] ;
    for(i=1; i<=n; i++)
    {
     max=-1000000 ;
     for(j=i; j<=n; j++)
     {
       if(a[j]>max)
       max=a[j] ;
       cout<<max<<" ";
     }
    }
    cout<<endl ;
  }
}
