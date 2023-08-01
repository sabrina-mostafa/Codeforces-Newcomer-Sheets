#include<bits/stdc++.h>
using namespace std ;
void fn(int a[] , int b)
{
    int i, mx=-100005, mn=100005;
    for(i=1; i<=b; i++)
    {
        if(a[i]>mx)
            mx=a[i] ;
        if(a[i]<mn)
            mn=a[i] ;
    }
    cout<<mn<<" "<<mx ;
}

int main ()
{
    int n , mn, mx , i ;
    cin>>n ;
    int x[n+5] ;
     for(i=1; i<=n; i++)
        cin>>x[i] ;
     fn(x, n) ;
}
