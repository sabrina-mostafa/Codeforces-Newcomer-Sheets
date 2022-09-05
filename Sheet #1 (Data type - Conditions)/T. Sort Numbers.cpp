#include<bits/stdc++.h>
using namespace std ;
int main ()
{
   int a, b, c ;
   cin>>a>>b>>c ;
   if(a>=b && b>=c) printf("%d\n%d\n%d\n\n", c, b, a) ;
   else if(a>=c && c>=b) printf("%d\n%d\n%d\n\n", b, c, a) ;
   else if(b>=c && c>=a) printf("%d\n%d\n%d\n\n",a, c, b) ;
   else if (b>=a && a>=c) printf("%d\n%d\n%d\n\n", c, a, b) ;
   else if(c>=a && a>=b) printf("%d\n%d\n%d\n\n", b, a, c) ;
   else printf("%d\n%d\n%d\n\n", a, b, c) ;
   printf("%d\n%d\n%d", a, b, c) ;
}
