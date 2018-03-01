#include <stdio.h>
void main
{
	char b[10];
	int i,s,j,count=0;
	scanf("%[^\n]s",b);
	s=strlen(b);
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<=s;j++)
		{
	if(b[i]==b[j])
	count++;
	}
	}
	if(count==0)
  {
	printf("No");
  }
	else
  {
	printf("Yes");
  }
}
