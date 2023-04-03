#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i;
    string s ;
    getline(cin, s) ;
    for(i=0; s[i]!='\\' ; i++)
    {
        cout<<s[i] ;
    }
}
