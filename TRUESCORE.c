#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int  a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a<=c && b<=d)
	    {
	        printf("POSSIBLE\n");
	    }
	    else printf("IMPOSSIBLE\n");
	}

}

