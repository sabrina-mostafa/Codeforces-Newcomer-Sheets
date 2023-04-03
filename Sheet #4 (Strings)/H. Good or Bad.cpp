#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s ;
    int t, i, f ;
    cin>> t ;
    while(t--)
    {
        f=0 ;
          cin>>s ;
        for(i=1; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(s[i-1]=='0' && s[i+1]=='0')
                {
                    f=1 ;
                    break ;
                }
            }
            else
            {
                if(s[i-1]=='1' && s[i+1]=='1')
                {
                    f=1 ;
                    break ;
                }
            }
        }
        if(f==1) cout<<"Good"<<endl ;
        else cout<<"Bad"<<endl ;
    }
}
