#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d",&a);
        if(a%4==0)
        {
            printf("%d\n",a/4);
        }
        else printf("%d\n",(a/4)+1);
    }

}

