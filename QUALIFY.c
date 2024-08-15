#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
;
for(int i=0;i<t;i++)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b+(c*2)>=a)
    {
        printf("Qualify\n");
    }
    else printf("NotQualify\n");
}
}

