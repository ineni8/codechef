#include <stdio.h>

int main(void) {
	 int n;
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
	     float a,b;
	     scanf("%f%f",&a,&b);
	     if((a/2.0)<=b)
	     {
	         printf("YES\n");
	     }
	     else printf("NO\n");
	 }

}

