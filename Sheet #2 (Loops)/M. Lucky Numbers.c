#include<stdio.h>
int main ()
{
 int a,b,x,r,f,i,flag=0;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
   f=0;
   x=i;
   while(x!=0)
   {
     r=x%10;
     if(r!=7 && r!=4)
     {
       f=1;
       break;
     }
     x/=10;
   }
   if(f==0){
        flag = 1;
        printf("%d ",i);
   }
 }
 if(flag==0) printf("-1");
}
