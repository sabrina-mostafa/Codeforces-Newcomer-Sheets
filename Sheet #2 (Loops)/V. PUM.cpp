#include<bits/stdc++.h>
using namespace std ;
int main ()
{
  int n, i ;
  cin>>n ;
  for(i=1; i<=(n*4); i++){
  if(i%4==0) printf("PUM\n") ;
  else
    printf("%d ", i);
  }
}
