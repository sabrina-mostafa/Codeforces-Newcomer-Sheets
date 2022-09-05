#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n, m, i, j, x, y ;
    int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, f7=0, f8=0 ;
    cin>>n>>m ;
    char a[n+4][m+4] ;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            cin>>a[i][j] ;
    cin>>x>>y ;
    if( (x-1)>=1 && (y-1)>=1 )
    {
        if( a[x-1][y-1] != 'x' )
            f1=1 ;
    }
    if( (x-1)>=1 )
    {
        if( a[x-1][y]!='x' )
            f2=1 ;
    }
    if( (x-1)>=1 && (y+1)<=m )
    {
        if( a[x-1][y+1]!='x' )
            f3=1 ;
    }
    if( (y-1)>=1 )
    {
        if( a[x][y-1]!='x' )
            f4=1 ;
    }
    if( (y+1)<=m )
    {
        if( a[x][y+1]!='x' )
            f5=1 ;
    }
    if( (x+1)<=n && (y-1)>=1 )
    {
        if( a[x+1][y-1]!='x' )
            f6=1 ;
    }
    if( (x+1)<=n )
    {
        if( a[x+1][y]!='x' )
            f7=1 ;
    }
    if( (x+1)<=n && (y+1)<=m )
    {
        if(a[x+1][y+1]!='x' )
            f8=1 ;
    }
    if( f1==0 && f2==0 && f3==0 && f4==0 && f5==0 && f6==0 && f7==0 && f8==0 ) cout<<"yes" ;
    else cout<<"no" ;
}
