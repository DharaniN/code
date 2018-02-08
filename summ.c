#include<stdio.h>
int main()
{
    int number,sum=0,aa;
    printf("Enter the number:");
   javascript:void(0) scanf("%d",&number);
    while(number>=0)
    {
        number=number%10;
        aa=number/10;
        sum=number+aa;
        printf("%d",sum);
    }
 
    return 0;
}
