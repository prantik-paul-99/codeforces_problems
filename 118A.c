#include<stdio.h>
#include<string.h>

int main ()
{
	int i,len;
	char s[200],n,p;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	    if (s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
	    {
	    	s[i]=s[i+1];
	    	//i--;
	    	//len--;
	    	//printf("%c",s[i]);
	    	  if (((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))&&s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u'&&s[i]!='y'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
	    {
	    	if ((s[i]>=65)&&(s[i]<=90))
	    {
	    	s[i]=s[i]+32;
	    	printf(".%c",s[i]);
	    	i++;
	    }
	    else
	      {
	      	 printf(".%c",s[i]);
	       //len++;
	       i++;
	      }
	    }
	    i++;
	}
	 
	   if (((s[i]>=65&&s[i]<=90)||(s[i]>=97&&s[i]<=122))&&s[i]!='a'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u'&&s[i]!='y'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y')
	    {
	    	if ((s[i]>=65)&&(s[i]<=90))
	    {
	    	s[i]=s[i]+32;
	    	printf(".%c",s[i]);
	    }
	    else
	       printf(".%c",s[i]);
	       //len++;
	    }
	    
	}
	//s[i]=0;
	//printf("%s",s);
}
