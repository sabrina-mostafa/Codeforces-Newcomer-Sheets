#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int a[130] = {0} , i ;
  string s ;
  cin>> s ;
  for(i=0; i<s.size() ; i++)
    a[ s[i] ]++ ;
   for(i=97; i<=122; i++)
   {
     if(a[i]>0) printf("%c : %d\n", i , a[i]) ;
   }
}
