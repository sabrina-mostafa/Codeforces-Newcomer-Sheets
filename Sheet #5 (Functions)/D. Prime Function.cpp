#include<bits/stdc++.h>
using namespace std ;
void fn(int x)
{
    int f=0 , i;
    for(i=2; i*i<=x; i++)
    {
      if(x%i==0)
      {
        f=1;
        break ;
      }
    }
    if(x==1 || f==1) cout<<"NO"<<endl ;
    else cout<<"YES"<<endl ;
}
int main ()
{
  int t ;
  cin>> t ;
  while(t--)
  {
    int n ;
    cin>>n ;
    fn(n) ;
  }
}
