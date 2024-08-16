#include <stdio.h>

int main() {
      int t;
      scanf("%d",&t);
      for(int i=0;i<t;i++)
      {
          int a;
          scanf("%d",&a);
          if(a<=1)
          {
              printf("0\n");
          }
         else {
             long y=(long)a*a/2;
        printf("%ld\n",y);
         }
      }
}

