///  ~~~~~Bismillah'hir Rah'manir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


#include<bits/stdc++.h>
using namespace std ;

#define   Fast      ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define   ULL       unsigned long long
#define   LL         long long
#define   ST          string
#define   F           first
#define   S           second
#define   PB        push_back
#define   MP       make_pair
#define   pi         acos(-1.0)
#define   NL       "\n"
#define    _           " "



int main ()
{
    int t, n, i, j, k, x, y, z , r, f=0, flag=0, cnt=0, mx = -1000000000, mn = 1000000000 ;

    string s, s1, s2, ans, temp ;

        cin>>s ;

        ans = s ;

        for(i=1; i<s.size() ; i++)
        {
                s1 = s.substr(0, i) ;
                s2 = s.substr(i, s.size()) ;

                sort(s1.begin(), s1.end() ) ;
                sort(s2.begin(), s2.end() ) ;

                temp = s1+s2 ;
                if(temp<ans) ans = temp ;
        }

        cout<<ans ;

    return 0 ;
}
