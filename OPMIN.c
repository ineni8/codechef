#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
           int s=a[0];
          for(int j=0;j<n;j++)
          {
              if(s>a[j])
              {
                  s=a[j];
              }
          }
          int h=0;
           for(int j=0;j<n;j++)
          {
              if(s==a[j])
              {
                  h++;
              }
          }
          
          if(n==1)
          {
             printf("0\n"); 
          }
          else printf("%d\n",n-h);
    }

    return 0;
}
