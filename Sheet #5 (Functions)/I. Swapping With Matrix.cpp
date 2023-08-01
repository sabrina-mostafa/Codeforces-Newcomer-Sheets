#include<bits/stdc++.h>
using namespace std ;
void func(int a[][505], int n, int  x, int  y )
{
    int i, j ;
    for(i=1; i<=n; i++)
        swap( a[x][i], a[y][i] ) ;
    for(i=1; i<=n; i++)
        swap( a[i][x], a[i][y] ) ;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout<<a[i][j]<<" " ;
            cout<<endl ;
    }
}
int main ()
{
    int n, x, y, i, j ;
    cin>>n>>x>>y ;
    int a[505][505] ;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>a[i][j] ;
    func(a, n, x, y) ;
}
