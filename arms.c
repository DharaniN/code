#include <stdio.h>
int main()
{
    int n1, n2, r, c = 0;

    printf("Enter the number: ");
    scanf("%d", &n1);

    n2= n1;

    while (n2 != 0)
    {
        r= n2%10;
        c= r*r*r;
        n2=n1/10;
    }

    if(c == n1)
    {
        printf(" Armstrong number",n1);
    }
    else
    {
        printf(" Not  Armstrong number",n1);

    }
}
