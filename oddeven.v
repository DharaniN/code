#include<stdio.h>
int main()
{
char str[100];
int i;
printf("Enter the string");
scanf("%s",&str);
printf("Even position");
for(i=0;str[i]!='\0';i=i+2)
{
printf("%c",str[i]);
}
printf("Odd position");
for(i=1;str[i]!='\0';i=i+2)
{
printf("%c",str[i]);
}
}
