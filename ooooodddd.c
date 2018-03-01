#include<stdio.h>
int main()
{
char str[1000];
int i;
printf("Enter the string");
scanf("%c",&str);
printf("Even");
for(i=0;str[i]!='\0';i=i+2)
{
printf("%c",str[i]);
}
printf("Odd");
for(i=1;str[i]!='\0';i=i+2)
{
printf("%c",str[i]);
}
}
