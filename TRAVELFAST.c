#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a<b)
	    {
	        printf("BIKE\n");
	    }
	    else if(b<a) printf("CAR\n");
	    else printf("SAME\n");
	}

}

