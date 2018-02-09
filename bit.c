#include <stdio.h>
int main() 
{
    int a;
    int b;
    printf("Enter the value a and b");
    scanf("%d",&a,&b);
    printf("Before swapping",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping",a,b);
    return 0;
    
 }
