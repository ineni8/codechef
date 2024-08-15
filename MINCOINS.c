#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%10==0)
        {
            printf("%d\n",a/10);
        }
        else if(a%5==0)
        {
            int g=a%10;
            printf("%d\n",(a/10)+(g/5));
        }
        else printf("-1\n");
    }

}

