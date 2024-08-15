#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(2*a==b)
	    {
	        printf("ANY\n");
	    }
	    if(2*a>b)
	    {
	        printf("FIRST\n");
	    }
	    if(2*a<b)
	    {
	        printf("SECOND\n");
	    }
	}

}

