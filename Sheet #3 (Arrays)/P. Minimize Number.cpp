#include<iostream>
using namespace std ;
int main ()
{
    int n, c=0, min=200, i;
    cin >> n ;
    int a[n+1] ;
    for(i=1; i<=n; i++)
    {
    c=0;
        cin>>a[i] ;
        while(a[i]%2==0)
        {
           a[i]/=2;
           c++ ;
        }
        if(min>c) min=c ;
    }
cout<<min ;
 
}
