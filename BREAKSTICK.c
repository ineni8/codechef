#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a%2==0 && b%2==0 && b<=a)
	    {
	        printf("YES\n");
	    }
	    if(a%2==0 && b%2!=0 && b<a)
	    {
	        printf("YES\n");
	    }
	    if(a%2!=0 && b%2!=0 && b<=a)
	    {
	        printf("YES\n");
	    }
	    if(a%2!=0 && b%2==0)
	    {
	        printf("NO\n");
	    }
	}

}

