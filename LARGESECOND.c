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
        int s=0;

     for (int i = 0; i < n; i++) {
        if(s<a[i])
        {
            s=a[i];
        }
     }
        int h=0;
        for (int i = 0; i < n; i++) {
        if(h<a[i]&& a[i]!=s)
        {
            h=a[i];
        }
    }
     printf("%d\n",s+h);
    }

    return 0;
}
