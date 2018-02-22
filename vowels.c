#include<stdio.h>
void main()
{
char z[20],flag=0,i;
printf("Enter the string");
scanf("%s",z);
for(i=0;;i++)
{
if((z[i]=='a')||(z[i]=='e')||(z[i]=='i')||(z[i]=='o')||(z[i]=='u'))
{
flag=1;
break;
}
}
if(flag==1)
{
printf("Yes");
}
else
{
printf("No");
}
}
