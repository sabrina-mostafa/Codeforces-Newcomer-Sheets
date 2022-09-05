#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   if(n==1)
   printf("-1");
   else
   for(i=2;i<=n;i+=2)
   {
      printf("%d\n",i);
   }
   return 0;
}
