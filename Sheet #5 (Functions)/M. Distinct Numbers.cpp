#include<bits/stdc++.h>
using namespace std ;
void fun(int a[], int n)
{
  int i , count=0;
  sort(a+1, a+n+1) ;
  for(i=1; i<n; i++)
  {
    if(a[i]==a[i+1])
    count++ ;
  }
  cout<<(n-count) ;
}
int main ()
{
  int n , i ;
  cin>>n ;
  int a[n+5] ;
  for(i=1; i<=n; i++)
    cin>>a[i] ;
  fun(a, n) ;
}
