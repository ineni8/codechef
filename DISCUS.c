#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",((a>b)?((a>c)?a:c):((b>c)?b:c)));
	}

}

