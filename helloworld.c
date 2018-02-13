#include <stdio.h>
void main()
{
    char a[200];
    int cou= 0, i;
    printf("enter any string");
    scanf("%c", a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
        {
            cou++;   
        }
    }
    printf("%d",cou+1);
}
