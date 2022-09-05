#include<stdio.h>
#include<ctype.h>
int main ()
{
  char x;
  scanf("%c",&x);
  if(isalpha(x)){
        printf("ALPHA\n");
    if(islower(x))
        printf("IS SMALL");
    else printf("IS CAPITAL");
  }
  else printf("IS DIGIT");
}
