#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(b>=a)
	    {
	        printf("%d\n",a);
	    }
	    else
	    {
	        printf("%d\n",2*a-b);
	    }
	}

}

