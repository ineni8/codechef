#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     for(int i=0;i<t;i++)
     {
         int a,b;
         scanf("%d%d",&a,&b);
         if(a<=b && b%a==0)
         {
             printf("YES\n");
         }
         else printf("NO\n");
     }

}

