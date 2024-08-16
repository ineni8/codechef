#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    char s[100],ch[100];
	    scanf("%s%s",s,ch);
	    int c=0,z=0;
	    for(int j=0;s[j]!='\0';j++)
	    {
	       if( ch[j]!=s[j] && (s[j]!='?' && ch[j]!='?')) 
	       {
	           c++;
	       }
	       if((s[j]!=ch[j]) || (s[j]=='?' && ch[j]=='?'))
	       {
	           z++;
	       }
	    }
	    printf("%d %d\n",c,z);
	}
}