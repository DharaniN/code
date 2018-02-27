#include <stdio.h>
#include <string.h>
int main ()
{
    char *a[100],*p;
    char b[1000];
    int i=0,j=0,temp;
    printf("\nEnter the ninja number of kabali and opponent : ");
    scanf("%[^\t]%*s",&b);
    p=strtok(b," \n");
    while(p!=NULL)
    {
        a[i++]=p;
        j++;
        p=strtok (NULL," \n");
    }
    for (i=0;i<j;i=i+2) 
    {
     temp=atoi(a[i])-atoi(a[i+1]);
     if(temp<0)
     {
     	temp=-temp;
     }
     printf("%d",temp);
    }
    return 0;
}
