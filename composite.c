#include<stdio.h>
int main()
{
    int i,n,f=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(n%i==0)
    {
        f++;
    }
    }
        if(f==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        return 0;
}
    
