#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d,e,f;
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	    int g=a+b+c;
	    int h=d+e+f;
	    if(g==h && a==d && b==e && c==f)
	    {
	        printf("TIE\n");
	    }
	    if(g>h)
	    {
	        printf("DRAGON\n");
	    }
	    if(h>g)
	    {
	        printf("SLOTH\n");
	    }
	    if(g==h && a>d)
	    {
	        printf("DRAGON\n");
	    }
	    if(g==h && a==d && b>e)
	    {
	        printf("DRAGON\n");
	    }
	    if(g==h && d>a)
	    {
	        printf("SLOTH\n");
	    }
	    if(g==h && a==d && e>b)
	    {
	        printf("SLOTH\n");
	    }
	   
	}

}

