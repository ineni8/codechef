#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        if(a>b)
        {
            printf("%d\n",a-b);
        }
        if(a<b)
        { 
            printf("%d\n",b-a);
        }
    }

}

