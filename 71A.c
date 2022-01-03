#include<stdio.h>
#include<string.h>

int main ()
{
	int n,i;
	char s[100],num[100],p;
	scanf("%d",&n);
	for (i=0;i<=n-1;i++)
	{
		scanf("%s",s);
	   // num[i]=s;
	   	if ( strlen(s)<=10)
		printf("%s\n",s);
		else 
		{
			printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
	}	
	//for (i=0;i<n;i++)
	{
		p=num[i];
	
	}
	}
}
