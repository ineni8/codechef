#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a>=b && a>=c && a>=d)
	    {
	        printf("%d\n",a+((c>d)?c:d));
	    }
	    else if(b>=a && b>=c && b>=d)
	    {
	        printf("%d\n",b+((c>d)?c:d));
	    }
	    else if(c>=b && c>=a && c>=d)
	    {
	        printf("%d\n",c+((a>b)?a:b));
	    }
	    else if(d>=b && d>=c && d>=a)
	    {
	        printf("%d\n",d+((a>b)?a:b));
	    }
	}

}

