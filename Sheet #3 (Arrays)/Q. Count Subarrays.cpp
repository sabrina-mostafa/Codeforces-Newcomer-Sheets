#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int t, n ;
  cin>> t ;
  while (t--)
  {
    cin>> n ;
    int a[n+4], i , c=1, sum=0;
     for(i=1; i<=n; i++)
        cin>>a[i] ;
    for(i=1; i<n; i++)
    {
      if(a[i]>a[i+1])   ///new increasing segment
      {
        sum+= ( (c*(c+1) ) / 2 ) ;   ///previous non-decreasing Array's total nmbr of sub-Arrays
        c=1 ;
      }
      else c++ ;
    }
    sum+= ( (c*(c+1) ) / 2 ) ;
    cout<<sum<<endl ;
  }
}



/*  ----- Alternative Way -----  */



#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int t, n, j, count ;
    cin>>t ;
    while(t--)
    {
        count =0 ;
        cin>>n ;
        int a[n+4], i ;
        for(i=1; i<=n; i++)
            cin>>a[ i] ;
        for(i=1; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                if(a[j]<a[j+1])
                    count++ ;
                else
                    break ;
            }
        }
        cout<<(count+n)<<endl ;
    }
}
