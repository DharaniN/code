#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The factor value is",n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d",i);
            }
    }
    return 0;
}
