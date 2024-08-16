#include <stdio.h>

int main(void) {
         int t;
         scanf("%d",&t);
         for(int i=0;i<t;i++)
         {
             int a,b;
             scanf("%d%d",&a,&b);
             int s=0,l=0;
             for(int j=1;;j++)
             {
                if(j%2!=0)
                {
                    l+=j;
                    if(l>a)
                    {
                      printf("Bob\n");
                      break;
                    }
                }
                if(j%2==0 && s<=b)
                {
                   s+=j;
                   if(s>b)
                   {
                       printf("Limak\n");
                       break;
                   }
                }
             }
         }

}

