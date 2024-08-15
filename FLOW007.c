#include <stdio.h>

int main(void) {
       int t;
       scanf("%d",&t);
       for(int i=0;i<t;i++)
       {
           int a,c=0;
           scanf("%d",&a);
           while(a!=0)
          {
             c=c*10+(a%10);
             a=a/10;
          }
          printf("%d\n",c);
       }

}

