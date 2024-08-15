#include <stdio.h>

int main(void) {
     int t;
     scanf("%d",&t);
     for(int i=0;i<t;i++)
     {
         int n;
         scanf("%d",&n);
         int arr[2*n];
         for(int j=0;j<2*n;j++)
         {
             scanf("%d",&arr[j]);
         }
         int count;
         for(int j=0;j<2*n;j++)
         {
              count=0;
             for(int k=0;k<2*n;k++)
             {
                 if(arr[j]==arr[k])
                 {
                     count++;
                 }
             }
             if(count>2)
             {
                 break;
             }
         }
         if(count>2)
         {
             printf("No\n");
         }
         else printf("Yes\n");
     }
}

