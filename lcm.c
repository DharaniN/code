#include<stdio.h>
int main()
{
int X,Y,min,L;
scanf("%d%d",&X,&Y);
min=(X<Y)?X:Y;
for(min=2;min<=X&&min<=Y;++min)
{
if((X%min==0)&&(Y%min==0))
{
  break;
}
}
L=(X*Y)/min;
printf("LCM of given number is = %d",L);
}
