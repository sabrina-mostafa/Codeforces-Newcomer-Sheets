#include<bits/stdc++.h>
using namespace std ;
void fn(int a, int b)
{
  long long int sum=0 , i , p ;
  for(i=2; i<=b; i+=2)
  {
              p =1 ;
   for(long long int j=1; j<=i; j++)
   {
       p*=a ;
       //cout<<"p="<<p<<endl ;
   }
   sum+=p ;
  }
  cout<<sum ;
}
int main ()
{
  int x, n ;
  cin>>x>>n ;
  fn(x, n) ;
}
