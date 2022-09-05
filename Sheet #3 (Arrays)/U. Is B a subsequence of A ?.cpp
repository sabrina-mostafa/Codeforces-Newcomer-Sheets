#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int n, m, f=0 , x=1, cnt=0 ;
  cin>>n>>m ;
  int a[n+3], b[m+3], c[m+3] , i, j ;
  for(i=1; i<=n; i++)
    cin>>a[i] ;
  for(i=1; i<=m; i++)
    cin>>b[i] ;
    for(i=1; i<=m; i++)
    {
      for(j=x; j<=n; j++)
      {
        if( b[i]==a[j] )
        {
          c[i]=a[j] ;
           x=j+1 ;
           cnt++ ;
          break ;
        }
      }
    }
   /* for(i=1; i<=m; i++)
        cout<<c[i]<<" " ;
    cout<<endl ;*/
if(cnt==m)
cout<<"YES" ;
else cout<<"NO" ;
}



/*  ----- Alternative Way -----  */




#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int n, m, f=0 , x=1 ;
  cin>>n>>m ;
  int a[n+3], b[m+3], c[m+3] , i, j ;
  for(i=1; i<=n; i++)
    cin>>a[i] ;
  for(i=1; i<=m; i++)
    cin>>b[i] ;
    for(i=1; i<=m; i++)
    {
      for(j=x; j<=n; j++)
      {
        if( b[i]==a[j] )
        {
          c[i]=a[j] ;
           x=j+1 ;
          break ;
        }
      }
    }
   /* for(i=1; i<=m; i++)
        cout<<c[i]<<" " ;
    cout<<endl ;*/
for(i=1; i<=m; i++)
{
  if(b[i]!=c[i])
  {
    f=1 ;
    break ;
  }
}
if(f==0) cout<<"YES" ;
else cout<<"NO" ;
}
