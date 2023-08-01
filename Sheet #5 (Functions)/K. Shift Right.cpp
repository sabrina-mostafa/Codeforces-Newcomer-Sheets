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



void func(int a[], int n, int x)
{
        int aa, b, c, d, arr[n+5] ;
    aa = x%n ;

    for(int i=0; i<n; i++)
    {
        b = i+aa ;
        b%=n ;

        arr[b] = a[i] ;
    }

    for(int i=0; i<n; i++)
        cout<<arr[i]<<" " ;
}


int main ()
{
    int n, x ;
    cin>>n>>x ;

    int a[n+5] ;
    for(int i=0; i<n; i++)
        cin>>a[i] ;

    func(a, n, x) ;


    return 0 ;
}
