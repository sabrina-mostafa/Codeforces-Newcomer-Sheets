#include<bits/stdc++.h>
using namespace std ;
void func(int x, char ch)
{
  for( int i=1; i<=x; i++)
  cout<<ch<<" " ;
  cout<<endl ;
}
int main ()
{
  int t ;
  cin>> t ;
  while(t--)
  {
    int n ;
    char c ;
    cin>>n>>c ;
    func(n, c) ;
  }
}
