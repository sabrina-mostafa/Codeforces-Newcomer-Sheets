#include<bits/stdc++.h>
using namespace std ;
void fn(long long int a)
{
    //cout<<endl<<" a "<<a<<endl ;
    long long int r , i=0, k, j , p , f=0 ;
    long long int s1[100000] , s2[100000] ;
    while(a!=0)
    {
        r=a%2 ;
        s1[i++]=r ;
        a/=2 ;
    }
    p=i ;
    for(j=0,k=(i-1) ; j<i; j++, k--)
    {
        s2[j]=s1[k] ;
    }
    for(i=0; i<p; i++)
    {
      if(s1[i]!=s2[i])
      {
          f=1;
          break ;
      }
    }
    if(f==0) cout<<"YES" ;
    else cout<<"NO" ;
}

void f(long long int x)
{
    if(x%2==0)
        cout<<"NO" ;
    else
    {
        fn(x) ;
    }
}
int main ()
{
    long long int n ;
    cin>> n ;
    f( n ) ;
}
