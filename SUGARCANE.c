#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a;
	    scanf("%d",&a);
	    printf("%d\n",a*50-((a*50*70)/100));
	}

}

