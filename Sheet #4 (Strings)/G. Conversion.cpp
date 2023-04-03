#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int i ;
    string s ;
    cin>>s ;
    for(i=0; i<s.size(); i++)
    {
      if(s[i]==',') s[i]=' ' ;
      else if(islower(s[i] )) s[i]=toupper(s[i]) ;
      else s[i]=tolower(s[i]) ;
    }
    cout<<s ;
}
