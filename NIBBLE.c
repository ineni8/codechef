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
            printf("Good\n");
        }
        else printf("Not Good\n");
    }

}

