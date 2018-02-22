#include<stdio.h>
void main()
{
char s;
printf("Enter the string");
scanf("%c",&s);
if(s=strrev(s))
{
printf("yes");
}
else
{
printf("No");
}
}
