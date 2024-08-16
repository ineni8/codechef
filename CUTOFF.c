#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n-i-1;j++)
           {
               if(a[j]<a[j+1])
               {
                   int temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }
           }
       }
           for(int i=0;i<n;i++)
           {
             if(i==(x-1))
    { printf("%d\n",a[i]-1);}
          }
    }
    return 0;
}
