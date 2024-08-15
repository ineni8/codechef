#include <stdio.h>

int main(void) {
       int n;
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
           int a,b,c,d;
           scanf("%d%d%d%d",&a,&b,&c,&d);
           if(a==b && b==c  && c==d && d==0)
           {
               printf("IN\n");
           }
           else if(a==b && b==c  && c==d && d==1)
           {
                printf("OUT\n");
           }
           else printf("OUT\n");
       }

}

