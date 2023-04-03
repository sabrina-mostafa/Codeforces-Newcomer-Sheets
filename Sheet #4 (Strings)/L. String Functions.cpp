///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define  Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ULL       unsigned long long
#define  LL         long long
#define ST          string

#define  F           first
#define  S           second
#define  PB        push_back
#define  MP       make_pair

#define  pi         acos(-1.0)

///for Unordered map
/* mpp.max_load_factor(0.25); mpp.reserve(1024); */
/* cout << fixed << setprecision(12);*/


int main ()
{
    int t, n, i, j, x, y, q, a, b;
    string s, s1, s2 ;
    char ch ;
    cin>>n>>q>>s ;
    for(i=1; i<=q; i++)
    {
        cin>>s1 ;
        if(s1=="substr")
        {
            cin>>a>>b ;
            if(a>b) swap(a, b) ;
            cout<< s.substr( (a-1), (b-a+1) ) <<endl ;
        }
        else if(s1=="sort")
        {
            cin>>a>>b ;
            if(a>b) swap(a, b) ;
            sort( s.begin()+(a-1), s.begin()+b ) ;
        }
        else if(s1=="reverse")
        {
            cin>>a>>b ;
            if(a>b) swap(a, b) ;
            reverse( s.begin()+(a-1), s.begin()+b ) ;
        }
        else if(s1=="pop_back")
        {
            s.pop_back() ;
        }
        else if(s1=="back")
        {
            cout<<s[s.size()-1] <<endl;
        }
        else if(s1=="front")
        {
            cout<<s[0] <<endl ;
        }
        else if(s1=="push_back")
        {
            cin>>ch ;
            s.push_back(ch) ;
        }
        else if(s1=="print")
        {
            cin>>x ;
            cout<<s[x-1]<<endl ;
        }
    }
    //cout<<s ;


    return 0 ;
}
