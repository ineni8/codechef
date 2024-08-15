#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     for(int i=0;i<t;i++)
     {
         int a,b,f=0;
         scanf("%d%d",&a,&b);
         for(int j=0;j<a;j++)
         {
             int c;
             scanf("%d",&c);
             if(c>=b)
             {
                 f++;
             }
         }
          printf("%d\n",f);
     }

}

