#include<stdio.h>
void main()
{
int x,y;
printf("Enterthe two numbers");
sacnf("%d%d",&x,&y);
if((x-y)%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
}
