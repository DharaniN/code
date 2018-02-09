#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the two number:");
    scanf("%d",&a,&b);
    swap(a,b);
    
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Swapping is",a,b);
}
