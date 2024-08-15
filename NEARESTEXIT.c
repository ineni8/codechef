#include <stdio.h>

int main(void) {
   int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
       int a;
       scanf("%d",&a);
       if(a>50 && a<=100)
       {
           printf("RIGHT\n");
           
       }
       else printf("LEFT\n");
   }

}

