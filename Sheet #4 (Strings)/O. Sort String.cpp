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
    int n, i, j, x=0, y, cnt=0, f=0, a[35];
    char ch ;
    cin>>n ;
    for(i=0; i<=26; i++)
        a[i]=0 ;
    for(i=1; i<=n; i++)
    {
        cin>>ch ;
        x=ch - 'a' ;
        a[x]++ ;
    }
    for(i=0; i<=26; i++)
    {
        if(a[i]>0)
        {
            for(j=1; j<=a[i]; j++)
            {
                cout<<char (i+'a') ;
            }
        }
    }

    return 0 ;
}
