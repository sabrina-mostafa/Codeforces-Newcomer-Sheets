#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t, x, y, i, j ;
    cin>> t ;
    while(t--)
    {
        string s1, s2 ;
        cin>>s1>>s2 ;
        x=s1.size() ;
        y=s2.size() ;
        if(x>y)
        {
            for( i=0; i<y ; i++)
                cout<<s1[i]<<s2[i] ;
            for( j=i; j<x; j++)
                cout<<s1[j] ;
        }
        else
        {
            for( i=0; i<x; i++)
                cout<<s1[i]<<s2[i] ;
            for( j=i; j<y; j++)
                cout<<s2[j] ;
        }
    cout<<endl ;
    }
}
