#include<bits/stdc++.h>
using namespace std ;
double fun(double x[], int n)
{
    double sum=0.0 , avg ;
    for(int i=1; i<=n; i++)
        sum+=x[i] ;
        avg=sum/n ;
        return avg ;
}
int main ()
{
    int n ,i ;
    cin>> n ;
    double x[n+5 ], q ;
    for(i=1; i<=n; i++)
        cin>>x[i] ;
        q=fun(x, n) ;
        printf("%.7lf", q) ;
}
