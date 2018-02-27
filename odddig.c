#include<stdio.h>
void main()
{
int d[100],i=0;
printf("enter the digit");
scanf("%d",&d);
while(isdigit(d[i]))
{
if((d[i]%2)!=0)
{
printf("%d",d[i]);
}
i++;
}
}
