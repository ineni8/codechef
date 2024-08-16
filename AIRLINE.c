#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e;
	    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	    if((a<=e && b+c<=d)||(b<=e && c+a<=d)||(c<=e && a+b<=d))
	    {
	        printf("YES\n");
	    }
	    else printf("NO\n");
	}

}

