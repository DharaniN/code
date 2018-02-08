#include <stdio.h>
int main() 
{
  int n;
  printf("\n enter the number:");
  scanf("%d",&n);
  if(n%2=0)
  {
      n--;
    printf("\n nearest even number is: %d",n);
  }
  
  return 0;
}
