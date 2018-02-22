#include<stdio.h>
void main() 
{
    char h[100];
    int a,b;
    scanf("%d",h);
    a=strlen(h);
    if(a%2!=0)
         b=a/2;
        h[b]='*';
        printf("%c",h);
        else
        b=a/2;
        h[b]='*';
        h[b-1]='*';
         printf("%c",h);
    
}
