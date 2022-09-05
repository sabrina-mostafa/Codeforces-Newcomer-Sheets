#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n, q, begin, end, mid, x ;
    cin>>n>>q ;
    int a[n+3], i ;
    for(i=1; i<=n; i++)
        cin>>a[i] ;
    sort(a+1, a+n+1) ;
    for(i=1; i<=q; i++)
    {
        begin = 1;
        end =n ;
        mid=( (begin+end)/2 ) ;
        cin>>x ;
        while( begin<=end && a[mid]!=x )
        {
            if( x>a[mid] )
                begin=mid+1 ;
            else
                end=mid-1 ;
            mid=( (begin+end)/2 ) ;
        }
        if(a[mid]==x) cout<<"found"<<endl ;
        else cout<<"not found"<<endl ;
    }
}
