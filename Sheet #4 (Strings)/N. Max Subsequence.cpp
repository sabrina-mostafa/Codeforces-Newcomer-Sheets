#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n, count=0, i ;
    string s ;
    cin>>n>>s ;
    for(i=0; i<=s.size()-1 ; i++)
    {
        if( (i+1)<=(s.size()-1) )
        {
            if(s[i]==s[i+1])
                count++ ;
        }
    }
    cout<<(n-count) ;
}
