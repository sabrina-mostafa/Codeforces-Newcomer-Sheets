#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int i, j, x, f=0 ;
   string s, s1 ;
   cin>>s ;
   x=s.size() ;
   s1=s ;
   for(i=0, j=(x-1) ; i<x ; i++, j--)
   {
     if(s[i]!=s[j])
     {
       f=1 ;
       break ;
     }
   }
   if(f==0) cout<<"YES" ;
   else cout<<"NO" ;
}
