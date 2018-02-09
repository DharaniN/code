#include <stdio.h>
void main()
{
int i,n,t=0, s=1,temp;
printf("Enter the number of terms");
scanf("%d",&n);
printf("Fibonacci Series");
for (i=1;i<=n;++i)
{
printf("%d, ",t);
temp t+s;
t=s;
s=temp;
}
}
