#include <stdio.h>
void main()
{
    long n;
    int cont=0;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while(n != 0)
    {
        
        n=n/10;
        ++cont;
    }

    printf("Number :", cont);
}
