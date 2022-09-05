#include<iostream>
using namespace std ;
int main ()
{
   int a, b, i, f=0;
   string s ;
   cin>>a>>b ;
   cin>>s ;
   if(s[a] == '-')
   {
     for(i=0; i<=(a+b); i++)
     {
         if(i==a) continue ;
       if( s[i]!='0' && s[i]!='1' && s[i]!='2' && s[i]!='3' && s[i]!='4' && s[i]!='5' && s[i]!='6' && s[i]!='7' && s[i]!='8' && s[i]!='9'  )
       {
           f=1 ;
          cout<<"No" ;
          break ;
       }
     }
     if(f==0) cout << "Yes" ;
   }
   else cout<<"No" ;
 
}
