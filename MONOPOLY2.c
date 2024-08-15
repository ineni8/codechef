#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    int y=(a>b)?((a>c)?((a>d)?a:d):((c>d)?c:d)):((b>c)?((b>d)?b:d):((c>d)?c:d));
	    if(y==a && y>b+c+d)
	    {
	        printf("YES\n");
	    }
	   else if(y==b && y>a+c+d)
	    {
	        printf("YES\n");
	    }
	   else if(y==c && y>b+a+d)
	    {
	        printf("YES\n");
	    }
	    else if(y==d && y>b+c+a)
	    {
	        printf("YES\n");
	    }
	    else printf("NO\n");
	    
	}

}

