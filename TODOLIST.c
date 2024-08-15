#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int n;
	    scanf("%d",&n);
	    int c=0;
	    for(int j=0;j<n;j++)
	    {
	        int a;
	        scanf("%d",&a);
	        if(a>=1000)
	        {
	            c++;
	        }
	    }
	    printf("%d\n",c);
	}
}

