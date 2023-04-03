#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i, sum=0 ;
    string s ;
    cin>>s ;
     for(i=0; i<s.size(); i++)
     {
       sum+=( s[i] -'0' ) ;
     }
     cout<<sum ;
}
