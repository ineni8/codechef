#include <stdio.h>

int main(void) {
int t;
   scanf("%d",&t);
   for(int i=0;i<t;i++)
   {
       int a;
       scanf("%d",&a);
       if(a>=1 && a<=10)
       {
           printf("Lower Double\n");
       }
       if(a>=11 && a<=15)
       {
           printf("Lower Single\n");
       }
       if(a>=16 && a<=25)
       {
           printf("Upper Double\n");
       }
       if(a>=26 && a<=30)
       {
           printf("Upper Single\n");
       }
   }

}

