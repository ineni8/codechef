#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
       int sum=0,s=0;
      for(int j=0;j<n;j++)
      {
          sum+=a[j];
          if(a[j]>=y)
          {
             s+=a[j]-y; 
          }
      }if(x+s<sum)
      {
          printf("COUPON\n");
      }
      if(x+s>=sum)
      {
          printf("NO COUPON\n");
      }
      
    }

    return 0;
}
