#include<stdio.h>
void main()
{
    char a[100];
    int i,cou=0,b=0;
    printf("enter the string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        cou++;
    }
    printf("%d",count);
    for(i=0;i<cou;i++)
    {
    if(a[i]=='0' || a[i]=='1')
    {
        b++;
    }
    }
printf("%d",b);
if(b==cou)
{
    printf("Yes");
}
else
{
    printf("No");
}
}
