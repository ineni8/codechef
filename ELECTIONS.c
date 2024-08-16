#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	   int a,b,c;
	   scanf("%d%d%d",&a,&b,&c);
	   if(a>50)
	   {
	       printf("A\n");
	   }
	    if(b>50)
	   {
	       printf("B\n");
	   }
	   if(c>50)
	   {
	       printf("C\n");
	   }
	   if(a<=50 && b<=50 && c<=50)
	   {
	       printf("NOTA\n");
	   }
	}
}

