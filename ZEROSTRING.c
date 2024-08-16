#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    char s[n];
	    scanf("%s",s);
	    int c=0,e=0;
	    for(int j=0;j<n;j++)
	    {
	        if(s[j]=='1')
	        {
	            c++;
	        }
	        if(s[j]=='0')
	        {
	            e++;
	        }
	    }
	    if(c>e)
	    {
	        printf("%d\n",e+1);
	    }
	    if(c<=e)
	    {
	        printf("%d\n",c);
	    }
	}

}

