#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if(c==0)
	    {
	        printf("YES\n");
	    }
	    else if(a*b>=c && c%b==0)
	    {
	        printf("YES\n");
	    }
	    else printf("NO\n");
	}

}

