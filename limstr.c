#include<stdio.h>
void main()
{
int i,n;
char a[50];
printf("Enter the string:");
scanf("%c",&a);
printf("Enter the limit:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
