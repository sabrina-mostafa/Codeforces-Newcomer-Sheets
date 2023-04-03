#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i, j, x=0, count =0 ;
    string s, s1="hello" ;
    cin>> s ;
    for(i=0; i<=s1.size()-1; i++)
    {
        for(j=x; j<=s.size()-1; j++)
        {
            if( s1[i]==s[j])
            {
                x = (j+1) ;
                count++ ;
               // cout<<"COUNT : "<<count<<endl ;
                break ;
            }
        }
             if( x>(s.size()-1) )
                break ;
    }
    if(count==5) cout<<"YES" ;
    else cout<<"NO" ;
}
